# -*- coding: Utf-8 -*

from decimal import Decimal

def logistic_equation(x: Decimal, k: Decimal):
    x = k * x * (Decimal('1000') - x) / Decimal('1000')
    return Decimal('0') if x < Decimal('0') else x

def calculation_with_given_k(n: Decimal, k: Decimal):
    x = n
    for i in range(100):
        print(f"{i + 1} {x:.2f}")
        x = logistic_equation(x, k)

def calculation_with_initial_generation(n: Decimal, i0: Decimal, i1: Decimal):
    k = Decimal('1')
    while k <= 4:
        x = n
        for _ in range(int(i0)):
            x = logistic_equation(x, k)
        for _ in range(int(i0), int(i1) + 1):
            print(f"{k:.2f} {x:.2f}")
            x = logistic_equation(x, k)
        k += Decimal('0.01')