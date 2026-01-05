f1, f2 = input().split()
f1, f2 = float(f1)/100, float(f2)/100

gdp = (((1+f1)*(1+f2)) - 1) * 100

print(f"{gdp:.6f}")