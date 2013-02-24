#include "Widget.h"
#include <ostream>

bool operator==(const Widget& lhs, const Widget& rhs)
{
    return lhs.id == rhs.id;
}

std::ostream& operator<<(std::ostream& os, const Widget& rhs)
{
    os << "Widget [id = " << rhs.id << "]";
    return os;
}

Widget::Widget()
  : id(0)
{}

Widget::Widget(int id)
  : id(id)
{}

void Widget::setId(int id)
{
    this->id = id;
}

int Widget::getId() const
{
    return id;
}