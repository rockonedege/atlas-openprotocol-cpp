s = '''
Job message MID 600-699
Tool messages MID 700-799
VIN Messages MID 800-899
Tightening result messages MID 900-999
Alarm messages MID 1000-1099
Time messages MID 1100-1199
Multi-spindle status messages MID 1200-1299
ulti-spindle result messages MID 1300-1399
User interface messages MID 1400-1499
Job messages, advanced MID 1500-1599
Multiple identifiers messages MID 1600-1699
I/O Interface MID 1700-1799
PLC user data messages MID 1800-1899
Selector messages MID 1900-1999
Tool Location System messages MID 2000-2099
Controller messages MID 2100-2199
Statistic messages MID 2200-2299
Automatic/Manual mode messages MID 2300-2399
Open Protocol CommandsDisabled MID 2400-2499
Parameter Set Messages MID 2500-2599  
New groups from MID 2600'''


from pprint import pprint as print

s = s.rsplit('\n')
print(s)
s = [l.strip() for l in s if l]
s = [' '.join(l.split(' MID ')[::-1]) for l in s]
print(s)
