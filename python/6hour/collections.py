import collections
from collections import Counter

c = Counter('gallad')
c = Counter(['a', 'b', 'c', 'd'])
c = Counter({'a':1, 'b':2})
c = Counter(cats=4, dogs=7)

print(c['pet'])