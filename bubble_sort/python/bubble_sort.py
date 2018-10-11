def Bubble_sort(tab):
    k = len(tab)
    j = 0

    while True:
        uporzadkowana = True
        for i in range(j, k - 1):
            if tab[i] > tab[i + 1]:
                uporzadkowana = False
                tab[i], tab[i + 1] = tab[i + 1], tab[i]
        for i in range(k - 2, j - 1, -1):
            if tab[i] > tab[i + 1]:
                uporzadkowana = False
                tab[i], tab[i + 1] = tab[i + 1], tab[i]
        if uporzadkowana:
            break
        k -= 1
        j += 1
    return tab

