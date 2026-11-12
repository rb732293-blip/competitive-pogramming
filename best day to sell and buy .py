def max_profit(p):

    low = p[0]
    best = 0

    for x in p:

        low = min(low, x)

        best = max(best, x - low)

    return best


print(max_profit([9, 4, 7, 2, 8, 5, 6]))