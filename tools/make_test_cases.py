"""extract commands from https://github.com/Rickedb/OpenProtocolInterpreter test cases"""
from pathlib import Path
import re


import yaml
import pystache


from pprint import pprint as p

# from pprint import pprint as print
import json
from itertools import chain


def get_one(f):
    first_line = f.read_text(encoding='utf-8').split('\n', 1)[0]
    # print((f, first_line))
    return first_line


def get_all_files():
    return [f for f in Path('G:/mids/full').rglob('*.txt')]


def main():
    root = Path(__file__).parent.absolute()
    all_ = [dict(s=get_one(f), name=f.name.split('.')[0])
            for f in get_all_files() if not 'Byte' in f.name]

    templ = (root / 'mustache/message.mustache').read_text()

    s = pystache.render(templ,  a=all_)
    Path(root.parent / 'src/openprotocol/test/test_message.cpp').write_text(s, encoding='utf-8')
    print(f'done with {len(all_)} tests.')


if __name__ == "__main__":
    main()
