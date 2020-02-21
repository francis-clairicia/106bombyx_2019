# -*- coding: Utf-8 -*

def logistic_equation(x: float, k: float):
    x = k * x * ((1000 - x) / 1000)
    return 0 if x < 0 else x

def calculation_with_given_k(n: str, k: str):
    x = int(n)
    k = float(k)
    for i in range(100):
        print(f"{i + 1} {x:.2f}")
        x = logistic_equation(x, k)

def calculation_with_initial_generation(n: str, i0: str, i1: str):
    k = 1
    i0 = int(i0)
    i1 = int(i1) + 1
    while k <= 4:
        x = int(n)
        for _ in range(i0):
            x = logistic_equation(x, k)
        for _ in range(i0, i1):
            print(f"{k:.2f} {round(x, 2):.2f}")
            x = logistic_equation(x, k)
        k = round(k + 0.01, 2)