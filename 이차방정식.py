a = float(input("x²의 계수는? "))
b = float(input("x의 계수는? "))
c = float(input("상수는? "))
d = (-b + (b**2 - 4 * a * c)**1/2) / (2 * a)
e = (-b - (b**2 - 4 * a * c)**1/2) / (2 * a)
if d == e:
    print(d)
elif d != e:
    print(d)
    print(e)
while 1:
    f = int(input("더 할거면 1, 안할거면 0 "))
    if f == 1:
        a = float(input("x²의 계수는? "))
        b = float(input("x의 계수는? "))
        c = float(input("상수는? "))
        d = (-b + (b**2 - 4 * a * c)**1/2) / (2 * a)
        e = (-b - (b**2 - 4 * a * c)**1/2) / (2 * a)
        if d == e:
            print(d)
        elif d != e:
            print(d)
            print(e)
    elif f == 0:
        exit()
    else:
        print("잘못입력했다")



