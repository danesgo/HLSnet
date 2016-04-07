

def nonlin(x,deriv=False):
    if(deriv==True):
        return x*(1-x)
    return 1/(1+np.exp(-x))

double nonlin(double x, bool deriv){
  if(deriv==True){
    return x*(1-x)
  }
  return 1/(1 + exp(-x))
}
