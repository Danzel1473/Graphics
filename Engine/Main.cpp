#include <Windows.h>

LRESULT CALLBACK WindowProc(HWND handle, UINT message, WPARAM wparam, LPARAM lparam)
{
    // 메시지 처리
    return DefWindowProc(handle, message, wparam, lparam);
}

int WINAPI WinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR lpCmdLine,
    _In_ int nShowCmd
)
{
    // 창에 사용할 클래스 이름
    const wchar_t* className = TEXT("Sample Window Class");

    // 창 생성에 필요한 설정 구조체
    WNDCLASS wc = { };

    // 메시지 처리를 위한 콜백 전달
    wc.lpfnWndProc = WindowProc;

    // 프로그램 주소 전달
    wc.hInstance = hInstance;

    // 창 생성에 사용할 클래스 이름 전달
    wc.lpszClassName = className;

    return 0;
}