#ifndef FILTER_GEN
#define FILTER_GEN
#include <vector>

class FilterGeneric {
    private:
        virtual bool g(int x)=0; //operation
    public:
        std::vector<int> filter(std::vector<int> input_vector);
        std::vector<int> mapped_vector;
};  
#endif