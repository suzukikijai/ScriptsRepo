import re
outfile = "test.txt"
fout = open(outfile, "a+")
pattern = re.compile(ur'http[^"]+.jpg', re.IGNORECASE)

for i, line in enumerate(open('cities.txt')):
 for match in re.findall(pattern, line):
  line = unicode(line, errors='ignore')
  line = match+'\n'
  fout.write(line)
fout.close()
