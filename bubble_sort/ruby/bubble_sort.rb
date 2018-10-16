def bub_sort(ar)
    i = 0 ; temp = 0
    swap_count = 0
    while true
        while i < ar.length-1
            if ar[i] > ar[i+1]
                temp = ar[i+1]
                ar[i+1] = ar[i]
                ar[i] = temp
                swap_count += 1
            end
            i+=1
        end
            if swap_count == 0
                break
            else
                swap_count = 0
                i = 0        
            end
    end       
    ar
end

ar = [1,21,3,22,54,12,18,0,19,18,1221,61,64,897,122231]
print "#{bub_sort(ar)}"
