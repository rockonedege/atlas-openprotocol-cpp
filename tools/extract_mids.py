"""extract commands from https://github.com/Rickedb/OpenProtocolInterpreter test cases"""
from pathlib import Path
import re

from pprint import pprint as print

# from pprint import pprint as print
import json
from itertools import chain
ns = r'namespace MIDTesters.(?P<namespace>\w+)'
method = r'public void (?P<method>\w+?)\(\)'
variable = r'string\s+(?P<variable>\w+)\s*=\s*@?"(?P<string>.*?)";'
mid = r'(?P<mid>var\s*mid\s*=.+?\((?P<argument>.+?)\);)'
delim = r'.*?'

method_mid = delim.join([method, mid])
method_mid = rf'(?P<method_mid>{method_mid})'

re_ns = re.compile(delim.join([ns]), re.DOTALL)
re_method = re.compile(delim.join([method]), re.DOTALL)
re_mid = re.compile(delim.join([method_mid]), re.DOTALL)
re_all = re.compile(delim.join([method,variable, mid]), re.DOTALL | re.MULTILINE)



def run(regex):
  fs = get_test_cs()
  for f in fs:
    s = f.read_text(encoding='utf-8')

    n = re_ns.findall(s)[0]
    s = re_mid.sub(f'''\g<method_mid>
      dumper.print(\g<argument>, mid, "{n}_\g<method>");''', s)
    f.write_text(s, encoding='utf-8')

  print(len(fs))


def get_test_cs():
  return [f for f in Path('F:/OpenProtocolInterpreter/src/MIDTesters').rglob('TestMid*.cs')]

def get_src_cs():
  mids =  [f for f in Path('F:/OpenProtocolInterpreter/src/\OpenProtocolInterpreter').rglob('Mid*.cs')]
  pattern = re.compile('/// <summary>.+?</summary>', re.MULTILINE|re.DOTALL)

  d ={}
  for f in mids:
    s = f.read_text(encoding='utf-8')
    comments = pattern.findall(s)
    # print((f.name, comments))
    if not comments:
      print(f)
    d[f.name] = comments


def main(root):
    run(re_mid)


if __name__ == "__main__":
    root = Path(r'F:/OpenProtocolInterpreter/src/MIDTesters')
    main(root)
    # get_src_cs()