def pushing(val,stack)
    stack << val
 end
 
 def poping(stack)
     if stack.length == 0
         "underflow"
     else 
     stack.pop
     end
 end
 
 stack = []
 while true
     puts "Select Operation(1 or 2)"
     puts "1.Push"
     puts "2.Pop"
     inp = Integer(gets)
     if inp == 1
         puts "Enter value"
         val = Integer(gets)
         pushing(val,stack)
     elsif inp == 2
         val = poping(stack)
         puts val
         break if val == "underflow"
     end
 end