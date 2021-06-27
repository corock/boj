t = int(input())
for i in range(t):
    price = float(input())
    print("$%.2f" % round(price * 0.8, 2))
