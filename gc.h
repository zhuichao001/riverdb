#include <thread>

template<typename S, typename T>
class data_entry_t;

class gc_worker_t{
    std::thread releaser;
public:

    void run(){
    }
    
    void gc_push(data_entry_t<S,T> *entry){
    }
};
