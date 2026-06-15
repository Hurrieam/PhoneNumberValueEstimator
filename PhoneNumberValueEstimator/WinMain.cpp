#ifndef UNICODE
#define UNICODE
#endif

#include <windows.h>
#include <commctrl.h>
#include <string>
#include <vector>

// 链接通用控件库
#pragma comment(lib, "comctl32.lib")

// 控件 ID
#define IDC_COMBO_COUNTRY  101
#define IDC_EDIT_PHONE     102
#define IDC_BTN_ESTIMATE   103
#define IDC_STATIC_RESULT  104
#define IDC_BTN_CLEAR      105 

struct CountryInfo {
    const wchar_t* name;
    const wchar_t* code;
    double baseRate;
    int minLength;
    int maxLength;
    const wchar_t* currencySign;
    std::vector<std::wstring> allowedPrefixes;
};

// 全球全大洲核心国家与地区数据库
const std::vector<CountryInfo> g_Countries = {
    // === 东亚与东南亚 ===
    { L"中国 (China)", L"+86", 1.0, 11, 11, L"￥", { L"13", L"14", L"15", L"16", L"17", L"18", L"19" } },
    { L"中国香港 (Hong Kong)", L"+852", 1.5, 8, 8, L"HK$", { L"4", L"5", L"6", L"7", L"8", L"9" } },
    { L"中国澳门 (Macao)", L"+853", 1.5, 8, 8, L"MOP$", { L"6" } },
    { L"中国台湾 (Taiwan)", L"+886", 1.3, 9, 9, L"NT$", { L"9" } },
    { L"日本 (Japan)", L"+81", 1.8, 10, 11, L"¥", { L"70", L"80", L"90" } },
    { L"韩国 (South Korea)", L"+82", 1.6, 9, 11, L"₩", { L"10" } },
    { L"新加坡 (Singapore)", L"+65", 2.0, 8, 8, L"S$", { L"8", L"9" } },
    { L"马来西亚 (Malaysia)", L"+60", 1.1, 9, 10, L"RM", { L"1" } },
    { L"泰国 (Thailand)", L"+66", 1.0, 9, 9, L"฿", { L"6", L"8", L"9" } },
    { L"越南 (Vietnam)", L"+84", 0.9, 9, 10, L"₫", { L"3", L"5", L"7", L"8", L"9" } },
    { L"菲律宾 (Philippines)", L"+63", 0.9, 10, 10, L"₱", { L"9" } },
    { L"印度尼西亚 (Indonesia)", L"+62", 0.9, 9, 12, L"Rp", { L"8" } },

    // === 南亚与中东 ===
    { L"印度 (India)", L"+91", 0.8, 10, 10, L"₹", { L"6", L"7", L"8", L"9" } },
    { L"巴基斯坦 (Pakistan)", L"+92", 0.7, 10, 10, L"₨", { L"3" } },
    { L"阿联酋 (UAE)", L"+971", 2.5, 9, 9, L"AED", { L"5" } },
    { L"沙特阿拉伯 (Saudi Arabia)", L"+966", 1.8, 9, 9, L"SR", { L"5" } },
    { L"土耳其 (Turkey)", L"+90", 1.2, 10, 10, L"₺", { L"5" } },
    { L"以色列 (Israel)", L"+972", 1.7, 9, 9, L"₪", { L"5" } },

    // === 北美洲 ===
    { L"美国 (USA)", L"+1", 1.5, 10, 10, L"$", { L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9" } },
    { L"加拿大 (Canada)", L"+1", 1.5, 10, 10, L"C$", { L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9" } },
    { L"墨西哥 (Mexico)", L"+52", 1.0, 10, 10, L"$", { L"1" } },

    // === 欧洲 ===
    { L"英国 (UK)", L"+44", 2.0, 10, 10, L"£", { L"7" } },
    { L"德国 (Germany)", L"+49", 2.2, 10, 11, L"€", { L"15", L"16", L"17" } },
    { L"法国 (France)", L"+33", 2.0, 9, 9, L"€", { L"6", L"7" } },
    { L"俄罗斯 (Russia)", L"+7", 1.1, 10, 10, L"₽", { L"9" } },
    { L"意大利 (Italy)", L"+39", 1.7, 10, 10, L"€", { L"3" } },
    { L"西班牙 (Spain)", L"+34", 1.6, 9, 9, L"€", { L"6", L"7" } },
    { L"荷兰 (Netherlands)", L"+31", 1.9, 9, 9, L"€", { L"6" } },
    { L"瑞士 (Switzerland)", L"+41", 2.5, 9, 9, L"CHF", { L"7" } },
    { L"瑞典 (Sweden)", L"+46", 1.8, 9, 10, L"kr", { L"7" } },
    { L"波兰 (Poland)", L"+48", 1.2, 9, 9, L"zł", { L"4", L"5", L"6", L"7", L"8" } },

    // === 大洋洲 ===
    { L"澳大利亚 (Australia)", L"+61", 2.0, 9, 9, L"A$", { L"4" } },
    { L"新西兰 (New Zealand)", L"+64", 1.8, 8, 10, L"NZ$", { L"2" } },

    // === 南美洲 ===
    { L"巴西 (Brazil)", L"+55", 1.1, 11, 11, L"R$", { L"9" } },
    { L"阿根廷 (Argentina)", L"+54", 1.0, 10, 11, L"$", { L"9" } },
    { L"哥伦比亚 (Colombia)", L"+57", 0.9, 10, 10, L"$", { L"3" } },
    { L"智利 (Chile)", L"+56", 1.2, 9, 9, L"$", { L"9" } },

    // === 非洲 ===
    { L"南非 (South Africa)", L"+27", 1.2, 9, 9, L"R", { L"6", L"7", L"8" } },
    { L"埃及 (Egypt)", L"+20", 1.0, 10, 10, L"E£", { L"1" } },
    { L"尼日利亚 (Nigeria)", L"+234", 0.8, 10, 10, L"₦", { L"7", L"8", L"9" } },
    { L"肯尼亚 (Kenya)", L"+254", 0.9, 9, 9, L"KSh", { L"7" } }
};

// 全局变量
WNDPROC g_OldEditProc = NULL;
HWND hComboGlobal = NULL;

// 函数声明
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK EditSubclassProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
bool IsPrefixValid(const std::wstring& num, const std::vector<std::wstring>& prefixes);

CountryInfo GetCurrentCountry() {
    int selIdx = 0;
    if (hComboGlobal) {
        int idx = (int)SendMessage(hComboGlobal, CB_GETCURSEL, 0, 0);
        if (idx != CB_ERR) selIdx = idx;
    }
    return g_Countries[selIdx];
}

bool IsPrefixValid(const std::wstring& num, const std::vector<std::wstring>& prefixes) {
    if (num.empty() || prefixes.empty()) return true;
    for (const auto& prefix : prefixes) {
        if (num.length() <= prefix.length()) {
            if (prefix.substr(0, num.length()) == num) return true;
        }
        else {
            if (num.substr(0, prefix.length()) == prefix) return true;
        }
    }
    return false;
}

std::wstring FilterTruncateAndValidate(const std::wstring& input, const CountryInfo& country, bool& outChanged) {
    std::wstring filtered = L"";
    outChanged = false;
    for (wchar_t ch : input) {
        if (filtered.length() >= (size_t)country.maxLength) {
            outChanged = true;
            break;
        }
        if (ch >= L'0' && ch <= L'9') {
            std::wstring testStr = filtered + ch;
            if (IsPrefixValid(testStr, country.allowedPrefixes)) {
                filtered += ch;
            }
            else {
                outChanged = true;
                break;
            }
        }
        else {
            outChanged = true;
        }
    }
    return filtered;
}

// 动态估价算法
std::wstring EstimatePhoneNumber(const CountryInfo& country, const std::wstring& number) {
    if (number.empty()) return L"提示：请输入手机号码！";

    int len = (int)number.length();
    if (len < country.minLength) {
        return L"错误：当前仅 " + std::to_wstring(len) + L" 位，该地区号码至少需要 " + std::to_wstring(country.minLength) + L" 位！";
    }

    bool prefixMatch = false;
    for (const auto& prefix : country.allowedPrefixes) {
        if (number.substr(0, prefix.length()) == prefix) {
            prefixMatch = true;
            break;
        }
    }
    if (!prefixMatch) return L"错误：该号码不属于该国真实的合法手机号段！";

    double baseValue = 0.0;

    // 1. 检查连号
    int maxRepeat = 1, currentRepeat = 1;
    for (size_t i = 1; i < number.length(); ++i) {
        if (number[i] == number[i - 1]) {
            currentRepeat++;
            if (currentRepeat > maxRepeat) maxRepeat = currentRepeat;
        }
        else {
            currentRepeat = 1;
        }
    }
    if (maxRepeat == 3)  baseValue += 100.0;
    if (maxRepeat == 4)  baseValue += 800.0;
    if (maxRepeat == 5)  baseValue += 3000.0;
    if (maxRepeat >= 6)  baseValue += 15000.0;

    // 2. 检查顺子
    int maxAscending = 1, currentAscending = 1;
    for (size_t i = 1; i < number.length(); ++i) {
        if (number[i] == number[i - 1] + 1) {
            currentAscending++;
            if (currentAscending > maxAscending) maxAscending = currentAscending;
        }
        else {
            currentAscending = 1;
        }
    }
    if (maxAscending == 4) baseValue += 250.0;
    if (maxAscending == 5) baseValue += 1000.0;
    if (maxAscending >= 6) baseValue += 5000.0;

    // 3. 尾数规律
    if (len >= 4) {
        std::wstring tail4 = number.substr(len - 4);
        if (tail4[0] == tail4[1] && tail4[2] == tail4[3] && tail4[0] != tail4[2]) baseValue += 150.0;
        if (tail4[0] == tail4[2] && tail4[1] == tail4[3] && tail4[0] != tail4[1]) baseValue += 120.0;
    }

    // 4. 文化加成
    std::wstring codeStr(country.code);
    if (codeStr == L"+86" || codeStr == L"+852" || codeStr == L"+853" || codeStr == L"+886") {
        for (wchar_t ch : number) {
            if (ch == '8') baseValue += 15.0;
            if (ch == '6') baseValue += 8.0;
            if (ch == '4') baseValue -= 5.0;
        }
    }

    if (baseValue <= 0.0) baseValue = 0.0;
    double finalScore = baseValue * country.baseRate;

    // 极端面额本币转换校准
    if (codeStr == L"+81")  finalScore *= 150.0;
    if (codeStr == L"+82")  finalScore *= 1300.0;
    if (codeStr == L"+62")  finalScore *= 15000.0;
    if (codeStr == L"+84")  finalScore *= 25000.0;

    return L"预计价值: " + std::wstring(country.currencySign) + std::to_wstring((int)finalScore);
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
    InitCommonControls();
    const wchar_t CLASS_NAME[] = L"PhoneEstimatorWindowClass";

    WNDCLASS wc = { };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hbrBackground = (HBRUSH)(COLOR_BTNFACE + 1);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0, CLASS_NAME, L"全球手机号码估价工具",
        WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME & ~WS_MAXIMIZEBOX,
        CW_USEDEFAULT, CW_USEDEFAULT, 480, 270,
        NULL, NULL, hInstance, NULL
    );

    if (hwnd == NULL) return 0;
    ShowWindow(hwnd, nCmdShow);

    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    static HWND hEdit, hBtn, hClear, hResult;
    static HFONT hFont;

    switch (uMsg) {
    case WM_CREATE: {
        hFont = CreateFont(18, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET,
            OUT_OUTLINE_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
            VARIABLE_PITCH | FF_SWISS, L"Microsoft YaHei");

        HWND hLabel1 = CreateWindow(L"STATIC", L"选择国际区号:", WS_VISIBLE | WS_CHILD, 20, 25, 120, 20, hwnd, NULL, NULL, NULL);
        SendMessage(hLabel1, WM_SETFONT, (WPARAM)hFont, TRUE);

        hComboGlobal = CreateWindow(L"COMBOBOX", NULL, WS_VISIBLE | WS_CHILD | CBS_DROPDOWNLIST | WS_VSCROLL, 20, 50, 190, 300, hwnd, (HMENU)IDC_COMBO_COUNTRY, NULL, NULL);
        SendMessage(hComboGlobal, WM_SETFONT, (WPARAM)hFont, TRUE);
        for (const auto& country : g_Countries) {
            std::wstring item = std::wstring(country.code) + L" " + country.name;
            SendMessage(hComboGlobal, CB_ADDSTRING, 0, (LPARAM)item.c_str());
        }
        SendMessage(hComboGlobal, CB_SETCURSEL, 0, 0);

        HWND hLabel2 = CreateWindow(L"STATIC", L"输入手机号码:", WS_VISIBLE | WS_CHILD, 230, 25, 200, 20, hwnd, NULL, NULL, NULL);
        SendMessage(hLabel2, WM_SETFONT, (WPARAM)hFont, TRUE);

        hEdit = CreateWindowEx(WS_EX_CLIENTEDGE, L"EDIT", NULL, WS_VISIBLE | WS_CHILD | ES_AUTOHSCROLL, 230, 50, 150, 24, hwnd, (HMENU)IDC_EDIT_PHONE, NULL, NULL);
        SendMessage(hEdit, WM_SETFONT, (WPARAM)hFont, TRUE);
        g_OldEditProc = (WNDPROC)SetWindowLongPtr(hEdit, GWLP_WNDPROC, (LONG_PTR)EditSubclassProc);

        hClear = CreateWindow(L"BUTTON", L"X", WS_VISIBLE | WS_CHILD, 385, 50, 25, 24, hwnd, (HMENU)IDC_BTN_CLEAR, NULL, NULL);
        SendMessage(hClear, WM_SETFONT, (WPARAM)hFont, TRUE);

        hBtn = CreateWindow(L"BUTTON", L"验证号码并评估价值", WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON, 20, 105, 420, 38, hwnd, (HMENU)IDC_BTN_ESTIMATE, NULL, NULL);
        SendMessage(hBtn, WM_SETFONT, (WPARAM)hFont, TRUE);

        hResult = CreateWindow(L"STATIC", L"等待输入...", WS_VISIBLE | WS_CHILD | SS_CENTER, 20, 165, 420, 40, hwnd, (HMENU)IDC_STATIC_RESULT, NULL, NULL);
        SendMessage(hResult, WM_SETFONT, (WPARAM)hFont, TRUE);
        return 0;
    }

    case WM_CTLCOLORSTATIC: {
        HDC hdcStatic = (HDC)wParam;
        SetBkMode(hdcStatic, TRANSPARENT);
        return (INT_PTR)GetSysColorBrush(COLOR_BTNFACE);
    }

    case WM_COMMAND: {
        if (LOWORD(wParam) == IDC_COMBO_COUNTRY && HIWORD(wParam) == CBN_SELCHANGE) {
            wchar_t buf[64];
            GetWindowText(hEdit, buf, 64);
            CountryInfo currentCountry = GetCurrentCountry();
            bool changed = false;
            std::wstring clean = FilterTruncateAndValidate(buf, currentCountry, changed);
            if (changed) {
                SetWindowText(hEdit, clean.c_str());
                SendMessage(hEdit, EM_SETSEL, clean.length(), clean.length());
            }
        }

        if (LOWORD(wParam) == IDC_BTN_CLEAR && HIWORD(wParam) == BN_CLICKED) {
            SetWindowText(hEdit, L"");
            SetWindowText(hResult, L"等待输入...");
            SetFocus(hEdit);
        }

        if (LOWORD(wParam) == IDC_BTN_ESTIMATE && HIWORD(wParam) == BN_CLICKED) {
            int selIdx = (int)SendMessage(hComboGlobal, CB_GETCURSEL, 0, 0);
            if (selIdx == CB_ERR) return 0;

            wchar_t textBuffer[64];
            GetWindowText(hEdit, textBuffer, 64);
            std::wstring phoneNum(textBuffer);

            std::wstring resultStr = EstimatePhoneNumber(g_Countries[selIdx], phoneNum);
            SetWindowText(hResult, resultStr.c_str());
        }
        return 0;
    }

    case WM_DESTROY:
        DeleteObject(hFont);
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

LRESULT CALLBACK EditSubclassProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_CHAR: {
        wchar_t ch = (wchar_t)wParam;

        // 当用户按下回车键（Enter键，ASCII码13）时
        if (ch == VK_RETURN) {
            SendMessage(GetParent(hwnd), WM_COMMAND, MAKEWPARAM(IDC_BTN_ESTIMATE, BN_CLICKED), (LPARAM)GetDlgItem(GetParent(hwnd), IDC_BTN_ESTIMATE));
            return 0;
        }

        // 【新增点】当用户按下 Esc 键（ASCII码27）时
        if (ch == VK_ESCAPE) {
            // 向父窗体投递命令，假装点击了清除按钮（IDC_BTN_CLEAR）
            SendMessage(GetParent(hwnd), WM_COMMAND, MAKEWPARAM(IDC_BTN_CLEAR, BN_CLICKED), (LPARAM)GetDlgItem(GetParent(hwnd), IDC_BTN_CLEAR));
            return 0; // 彻底拦截，防止系统发出咚的声音
        }

        if (ch == 1) { // Ctrl+A
            SendMessage(hwnd, EM_SETSEL, 0, -1);
            return 0;
        }
        if (ch == VK_BACK || ch == 3 || ch == 24) break;

        if (ch >= L'0' && ch <= L'9') {
            CountryInfo country = GetCurrentCountry();
            DWORD start = 0, end = 0;
            SendMessage(hwnd, EM_GETSEL, (WPARAM)&start, (LPARAM)&end);

            wchar_t currentBuffer[64] = { 0 };
            GetWindowText(hwnd, currentBuffer, 64);
            std::wstring currentText(currentBuffer);
            std::wstring targetText = currentText.substr(0, start) + ch + currentText.substr(end);

            if (targetText.length() > (size_t)country.maxLength) {
                MessageBeep(MB_ICONWARNING);
                return 0;
            }
            if (!IsPrefixValid(targetText, country.allowedPrefixes)) {
                MessageBeep(MB_ICONERROR);
                return 0;
            }
            break;
        }
        MessageBeep(MB_ICONWARNING);
        return 0;
    }
    case WM_PASTE: {
        if (OpenClipboard(hwnd)) {
            HANDLE hData = GetClipboardData(CF_UNICODETEXT);
            if (hData != NULL) {
                wchar_t* pText = (wchar_t*)GlobalLock(hData);
                if (pText != NULL) {
                    std::wstring clipText(pText);
                    GlobalUnlock(hData);
                    CloseClipboard();

                    CountryInfo country = GetCurrentCountry();
                    DWORD start = 0, end = 0;
                    SendMessage(hwnd, EM_GETSEL, (WPARAM)&start, (LPARAM)&end);

                    wchar_t currentBuffer[64] = { 0 };
                    GetWindowText(hwnd, currentBuffer, 64);
                    std::wstring currentText(currentBuffer);
                    std::wstring targetText = currentText.substr(0, start) + clipText + currentText.substr(end);

                    bool isChanged = false;
                    std::wstring finalValidText = FilterTruncateAndValidate(targetText, country, isChanged);
                    SetWindowText(hwnd, finalValidText.c_str());
                    SendMessage(hwnd, EM_SETSEL, finalValidText.length(), finalValidText.length());

                    if (isChanged) MessageBeep(MB_ICONWARNING);
                    return 0;
                }
            }
            CloseClipboard();
        }
        break;
    }
    }
    return CallWindowProc(g_OldEditProc, hwnd, uMsg, wParam, lParam);
}