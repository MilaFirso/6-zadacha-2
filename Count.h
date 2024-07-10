#pragma once
#include <iostream>

class Counter {

private: int count;

public:Counter() { count = 1; }
      Counter(int count) {}
      void add();
      
      void min();

      void set_count(int a);
      
      int  get_count();
          
      void kon();
};
