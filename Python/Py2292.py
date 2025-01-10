N = int(input())
layer = 1
range_max = 1

while N > range_max:
    range_max += 6 * layer
    layer += 1

print(layer)
