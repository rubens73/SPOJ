input_list <-c()
bank_note <-c(50,10,5,1)
quotient<-0
rest<-0
index=1

while(TRUE){
  input_list[index] <-as.integer(readline(prompt=""))
  if(input_list[length(input_list)] == 0){
      break
  }else{
    index<-index+1
  }
}

if(length(input_list)!=1){
  for (i in 1:(length(input_list)-1)) {
    cat("Teste ", i, "\n")
    for (note in bank_note) {
      quotient <- input_list[i]%/%note
      rest <- input_list[i]%%note
      input_list[i]<-rest
      cat(quotient," ")
    }
    cat("\n\n")
  }
}
