#ifndef COMPILE_ONLINE
#include "header.cpp"
#endif

void Test1()
{
    bool ret = Solution().isPalindrome(121);
    if(ret)
    {
        std::cout << "通过用例1,测试121通过... OK!" << std::endl;
    }
    else
    {
        std::cout << "未通过用例1,测试121失败..." << std::endl;
    }
}

void Test2()
{
    // 通过定义临时对象，来完成方法的调用
    bool ret = Solution().isPalindrome(-10);
    if(!ret)
    {
        std::cout << "通过用例2,测试-10通过... OK!" << std::endl;
    }
    else
    {
        std::cout << "未通过用例2, 测试-10失败..."  << std::endl;
    }
}

int main()
{
    Test1();
    Test2();
    return 0;
}
