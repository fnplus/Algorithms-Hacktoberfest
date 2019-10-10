#Straight Insertion Sort

sort.sis <- function(x,z)
{
  if(!is.vector(x)) {stop("Parameter must be a vector")}
  if(!is.numeric(x)) {stop("Parameter must be a numeric")}
  if(!is.numeric(z)) {stop("Parameter must be a numeric")}
  n = length(x)
  y = numeric(n+1)
  
  for (i in 1:n)
  {
    j = i
    while (x[j] <= z)
    {
      y <<- append(x,z, after = j)
      j = j + 1
    }
  } 
}

#Test
x = seq(1:10)
z = 4
sort.sis(x,z)
y