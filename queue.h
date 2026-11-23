#ifndef QUEUE_H
#define QUEUE_H

#include <array>
#include <string>

class clinic{
    public:
        clinic();
        void option1();
        void option2();
        void option3();
        void option4();
        void reset();
   
    private:
        std::array<int, 20>ticket;
        std::array<std::string, 20 >name;
        int count;
        int next_tick = 101;
        int emergency=0;
    };



#endif