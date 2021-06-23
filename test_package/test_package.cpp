#include <plf_list.h>

int main() {
    plf::list<int> list1 = {1, 2, 3, 4, 5};
    plf::list<int>::iterator it = --(list1.end());
    list1.splice(list1.begin(), it);
    return 0;
}
