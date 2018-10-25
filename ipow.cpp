
constexpr double ipow(const double &x, const unsigned int &n){
    
    double result{1}, temp{x};
    
    for(int j=1; j<=n; j<<=1){
       if(n&j){
           result *= temp;
       }
       temp *= temp;
    }
    
    return result;
}