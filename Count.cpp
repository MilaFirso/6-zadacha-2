#include "Count.h"


void Counter::add()
{
    this->count = count + 1;
    std::cout << "�������� �������� ��������� �� 1:)" << std::endl;
}
void Counter::min()
{
    this->count = count - 1;
    std::cout << "�������� �������� ��������� �� 1:(" << std::endl;
}
void Counter::set_count(int a)
{
    count = a;
}
int::Counter::get_count()
{
    return count;
}
void Counter::kon()
{
    std::cout << "�� ��������!" << std::endl;
}