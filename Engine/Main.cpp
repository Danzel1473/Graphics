#include <Windows.h>

LRESULT CALLBACK WindowProc(HWND handle, UINT message, WPARAM wparam, LPARAM lparam)
{
    // �޽��� ó��
    return DefWindowProc(handle, message, wparam, lparam);
}

int WINAPI WinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR lpCmdLine,
    _In_ int nShowCmd
)
{
    // â�� ����� Ŭ���� �̸�
    const wchar_t* className = TEXT("Sample Window Class");

    // â ������ �ʿ��� ���� ����ü
    WNDCLASS wc = { };

    // �޽��� ó���� ���� �ݹ� ����
    wc.lpfnWndProc = WindowProc;

    // ���α׷� �ּ� ����
    wc.hInstance = hInstance;

    // â ������ ����� Ŭ���� �̸� ����
    wc.lpszClassName = className;

    return 0;
}