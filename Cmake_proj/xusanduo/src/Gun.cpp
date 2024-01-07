#include "Gun.h"
#include "iostream"
using namespace std;

void Gun::addBullet(int bullet_num)
{
    this->_bullet_count += bullet_num;
}

bool Gun::shoot()
{
    if (this->_bullet_count <= 0)
    {
        cout << "less bullet" << endl;
        return false;
    }
    cout << "zxs fire once" << endl;
    this->_bullet_count -= 1;
    return true;
}