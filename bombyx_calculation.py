# -*- coding: Utf-8 -*

def calculation_with_given_k(n: int, k: float):
    x = n
    for i in range(100):
        print(f"{i + 1} {x:.2f}")
        x = k * x * (1000 - x) / 1000

def calculation_with_initial_generation(n: int, i0: int, i1: int):
    k = 1
    while k <= 4:
        x = n
        for _ in range(int(i0)):
            x = k * x * (1000 - x) / 1000
        for _ in range(int(i0), int(i1) + 1):
            print(f"{k:.2f} {x:.3f}")
            x = k * x * (1000 - x) / 1000
        k = round(k + 0.01, 2)