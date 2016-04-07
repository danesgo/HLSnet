
double nonlin(double x, bool deriv){
  if(deriv==true){
    return x*(1-x)
  }
  return 1/(1 + exp(-x))
}
