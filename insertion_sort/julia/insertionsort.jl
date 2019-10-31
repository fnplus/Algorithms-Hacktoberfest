function insertionsort(lis)
    for item in 2:length(lis)
        key = lis[item]
        i = item - 1
        while i > 0 && key < lis[i]
            lis[i+1] = lis[i]
            i = i - 1
        end
        lis[i+1] = key
    end
    return lis
end
