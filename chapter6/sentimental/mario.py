import cs50


while True:
    height = cs50.get_int ("Height: ")
    if height >= 0 and height <= 23:
        break

i = 1

while height > 0:
    print(" " * (height - 1), end="")
    print("#" * (i), end="")
    print("  ", end="")
    print("#" * (i), end="")
    print("")
    i += 1
    height -= 1



    # while b < 0:
    #     print(" ", end="")
    #     b -= 1
    # while g >= 0:
    #     print("#", end="")
    #     g -= 1

    # print("")
    # i -= 1


# for i in range(height - 1):
#     for b in range(i - 1):
#         print(" ", end="")
#         b -= 1
#     for g in range (g):
#         print("#", end="")
#         g -= 1
#     i -= 1