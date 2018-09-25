output_flag = TRUE
input_list <-c()
number = 0
index = 1

while(output_flag){
  
  number<-as.integer(readline(prompt=""))
   
  if(number<0){
    quit(save="no",status = 0, runLast = TRUE)
  }
  
  if( number>100){
    quit(save="no",status = 0, runLast = TRUE)
  }
  
  input_list[index] <- number
  
  if(input_list[length(input_list)] == 0){
    output_flag = FALSE
  }else{
    index<-index+1
  }
}

result = function(num){
  sum = 0
  for (x in 1:num) {
    sum = sum + (x*x)
  }
  print(sum)
}

for(i in 1:(length(input_list)-1))
{
  result(input_list[i])
}
