# -*- coding: Utf-8 -*

def print_float(x: float, n: int):
    str_x = str(x)
    dot = str_x.find(".")
    if n == 0:
        print(str_x[:dot])
    else:
        print(str_x[:dot + 1 + n])

def logistic_equation(x: float, k: float):
    x = k * x * (1000 - x) / 1000
    return 0 if x < 0 else x

def calculation_with_given_k(n: int, k: float):
    x = n
    for i in range(100):
        print(f"{i + 1} {x:.2f}")
        x = logistic_equation(x, k)

def calculation_with_initial_generation(n: int, i0: int, i1: int):
    k = 1
    while k <= 4:
        x = float(n)
        for _ in range(int(i0)):
            x = logistic_equation(x, k)
        for _ in range(int(i0), int(i1) + 1):
            print(f"{k:.2f} {round(x, 2):.2f}")
            x = logistic_equation(x, k)
        k = round(k + 0.01, 2)