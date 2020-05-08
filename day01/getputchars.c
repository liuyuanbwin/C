/*
 * @Description: 
 * @Version: 
 * @Author: liu
 * @Date: 2020-05-08 19:11:55
 */
#include <stdio.h>
#include <Windows.h>

void openIE(){
    ShellExecute(0, "open", "http://www.baidu.com", 0, 0, 1);
}
void search()
{
	//键盘输入
	keybd_event('S', 0, 0, 0); //按下
	keybd_event('S', 0, 2, 0); //松开
	Sleep(100);
	keybd_event('B', 0, 0, 0); //按下
	keybd_event('B', 0, 2, 0); //松开
	Sleep(500);
	//回车
	keybd_event(0x0d, 0, 0, 0);
	keybd_event(0x0d, 0, 2, 0);
	Sleep(500);

    keybd_event(0x0d, 0, 0, 0);
	keybd_event(0x0d, 0, 2, 0);
	Sleep(500);
}

int main(){
    openIE();
    Sleep(3000);
    search();
    return 0;
}