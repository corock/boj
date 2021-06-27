# Runtime error for PyPy3
from datetime import datetime as dt
now = dt.now()
month = len(str(now.month)) == 1 and str(now.month).zfill(2)
print(f'{now.year}-{month}-{now.day}')
