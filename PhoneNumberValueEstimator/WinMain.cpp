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
    { L"印度 (India)", L"+91", 0.8, 10, 10, L"₹", { L"6", L"7", L"8", L"9" } },
    { L"巴基斯坦 (Pakistan)", L"+92", 0.7, 10, 10, L"₨", { L"3" } },
    { L"阿联酋 (UAE)", L"+971", 2.5, 9, 9, L"AED", { L"5" } },
    { L"沙特阿拉伯 (Saudi Arabia)", L"+966", 1.8, 9, 9, L"SR", { L"5" } },
    { L"土耳其 (Turkey)", L"+90", 1.2, 10, 10, L"₺", { L"5" } },
    { L"以色列 (Israel)", L"+972", 1.7, 9, 9, L"₪", { L"5" } },
    { L"美国 (USA)", L"+1", 1.5, 10, 10, L"$", { L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9" } },
    { L"加拿大 (Canada)", L"+1", 1.5, 10, 10, L"C$", { L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9" } },
    { L"墨西哥 (Mexico)", L"+52", 1.0, 10, 10, L"$", { L"1" } },
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
    { L"澳大利亚 (Australia)", L"+61", 2.0, 9, 9, L"A$", { L"4" } },
    { L"新西兰 (New Zealand)", L"+64", 1.8, 8, 10, L"NZ$", { L"2" } },
    { L"巴西 (Brazil)", L"+55", 1.1, 11, 11, L"R$", { L"9" } },
    { L"阿根廷 (Argentina)", L"+54", 1.0, 10, 11, L"$", { L"9" } },
    { L"哥伦比亚 (Colombia)", L"+57", 0.9, 10, 10, L"$", { L"3" } },
    { L"智利 (Chile)", L"+56", 1.2, 9, 9, L"$", { L"9" } },
    { L"南非 (South Africa)", L"+27", 1.2, 9, 9, L"R", { L"6", L"7", L"8" } },
    { L"埃及 (Egypt)", L"+20", 1.0, 10, 10, L"E£", { L"1" } },
    { L"尼日利亚 (Nigeria)", L"+234", 0.8, 10, 10, L"₦", { L"7", L"8", L"9" } },
    { L"肯尼亚 (Kenya)", L"+254", 0.9, 9, 9, L"KSh", { L"7" } }
};

// 中国号段细分结构
struct SegLocation {
    const wchar_t* prefix7;
    const wchar_t* location;
};

// 精细化全国主流一二线城市及核心号段库
const SegLocation g_ChinaSegments[] = {
    // 北京
    { L"1390100", L"北京 移动" }, { L"1390110", L"北京 移动" }, { L"1380100", L"北京 移动" }, { L"1380110", L"北京 移动" }, { L"1350110", L"北京 移动" }, { L"1880100", L"北京 移动" },
    { L"1300100", L"北京 联通" }, { L"1300110", L"北京 联通" }, { L"1314100", L"北京 联通" }, { L"1860110", L"北京 联通" }, { L"1560110", L"北京 联通" },
    { L"1330100", L"北京 电信" }, { L"1330110", L"北京 电信" }, { L"1890100", L"北京 电信" }, { L"1800110", L"北京 电信" }, { L"1770110", L"北京 电信" },
    // 上海
    { L"1390160", L"上海 移动" }, { L"1390170", L"上海 移动" }, { L"1380160", L"上海 移动" }, { L"1380170", L"上海 移动" }, { L"1360170", L"上海 移动" }, { L"1880170", L"上海 移动" },
    { L"1300160", L"上海 联通" }, { L"1300170", L"上海 联通" }, { L"1316200", L"上海 联通" }, { L"1861600", L"上海 联通" }, { L"1561600", L"上海 联通" },
    { L"1330160", L"上海 电信" }, { L"1330170", L"上海 电信" }, { L"1891700", L"上海 电信" }, { L"1801700", L"上海 电信" }, { L"1771700", L"上海 电信" },
    // 广东 (广州/深圳/东莞/佛山/珠海/中山等)
    { L"1390220", L"广东广州 移动" }, { L"1380220", L"广东广州 移动" }, { L"1350220", L"广东广州 移动" }, { L"1882000", L"广东广州 移动" },
    { L"1300200", L"广东广州 联通" }, { L"1318900", L"广东广州 联通" }, { L"1862000", L"广东广州 联通" }, { L"1562200", L"广东广州 联通" },
    { L"1330220", L"广东广州 电信" }, { L"1892200", L"广东广州 电信" }, { L"1802200", L"广东广州 电信" },
    { L"1390290", L"广东深圳 移动" }, { L"1380250", L"广东深圳 移动" }, { L"1351000", L"广东深圳 移动" }, { L"1882340", L"广东深圳 移动" },
    { L"1300540", L"广东深圳 联通" }, { L"1314390", L"广东深圳 联通" }, { L"1868200", L"广东深圳 联通" }, { L"1562520", L"广东深圳 联通" },
    { L"1333290", L"广东深圳 电信" }, { L"1892300", L"广东深圳 电信" }, { L"1802530", L"广东深圳 电信" },
    { L"1392290", L"广东东莞 移动" }, { L"1382920", L"广东东莞 移动" }, { L"1867690", L"广东东莞 联通" }, { L"1332680", L"广东东莞 电信" },
    { L"1392310", L"广东佛山 移动" }, { L"1382340", L"广东佛山 移动" }, { L"1867570", L"广东佛山 联通" }, { L"1331820", L"广东佛山 电信" },
    { L"1392690", L"广东惠州 移动" }, { L"1382420", L"广东惠州 移动" }, { L"1867520", L"广东惠州 联通" },
    { L"1392800", L"广东珠海 移动" }, { L"1866690", L"广东珠海 联通" }, { L"1392490", L"广东中山 移动" }, { L"1867600", L"广东中山 联通" },
    // 浙江 (杭州/宁波/温州/金华/台州/绍兴等)
    { L"1390571", L"浙江杭州 移动" }, { L"1380571", L"浙江杭州 移动" }, { L"1350571", L"浙江杭州 移动" }, { L"1885710", L"浙江杭州 移动" },
    { L"1300360", L"浙江杭州 联通" }, { L"1860571", L"浙江杭州 联通" }, { L"1560571", L"浙江杭州 联通" },
    { L"1330571", L"浙江杭州 电信" }, { L"1890571", L"浙江杭州 电信" }, { L"1800571", L"浙江杭州 电信" },
    { L"1390574", L"浙江宁波 移动" }, { L"1380574", L"浙江宁波 移动" }, { L"1860574", L"浙江宁波 联通" }, { L"1330574", L"浙江宁波 电信" },
    { L"1390577", L"浙江温州 移动" }, { L"1380577", L"浙江温州 移动" }, { L"1860577", L"浙江温州 联通" }, { L"1330577", L"浙江温州 电信" },
    { L"1390579", L"浙江金华 移动" }, { L"1860579", L"浙江金华 联通" }, { L"1390650", L"浙江台州 移动" }, { L"1390575", L"浙江绍兴 移动" },
    // 江苏 (南京/苏州/无锡/常州/南通/徐州等)
    { L"1390515", L"江苏南京 移动" }, { L"1380515", L"江苏南京 移动" }, { L"1350515", L"江苏南京 移动" },
    { L"1300340", L"江苏南京 联通" }, { L"1860250", L"江苏南京 联通" }, { L"1560250", L"江苏南京 联通" },
    { L"1330515", L"江苏南京 电信" }, { L"1890515", L"江苏南京 电信" }, { L"1800515", L"江苏南京 电信" },
    { L"1390620", L"江苏苏州 移动" }, { L"1380620", L"江苏苏州 移动" }, { L"1350620", L"江苏苏州 移动" },
    { L"1300345", L"江苏苏州 联通" }, { L"1860620", L"江苏苏州 联通" }, { L"1330620", L"江苏苏州 电信" }, { L"1890620", L"江苏苏州 电信" },
    { L"1390611", L"江苏无锡 移动" }, { L"1380611", L"江苏无锡 移动" }, { L"1860610", L"江苏无锡 联通" }, { L"1330611", L"江苏无锡 电信" },
    { L"1390612", L"江苏常州 移动" }, { L"1860519", L"江苏常州 联通" }, { L"1390619", L"江苏南通 移动" }, { L"1860513", L"江苏南通 联通" },
    { L"1390520", L"江苏徐州 移动" }, { L"1860516", L"江苏徐州 联通" }, { L"1390510", L"江苏扬州 移动" },
    // 四川 (成都/绵阳/德阳/宜宾等)
    { L"1390800", L"四川成都 移动" }, { L"1380800", L"四川成都 移动" }, { L"1350800", L"四川成都 移动" },
    { L"1300810", L"四川成都 联通" }, { L"1860280", L"四川成都 联通" }, { L"1560280", L"四川成都 联通" },
    { L"1330800", L"四川成都 电信" }, { L"1890800", L"四川成都 电信" }, { L"1800800", L"四川成都 电信" },
    { L"1390811", L"四川绵阳 移动" }, { L"1860816", L"四川绵阳 联通" }, { L"1390810", L"四川德阳 移动" }, { L"1390903", L"四川宜宾 移动" },
    // 湖北 (武汉/襄阳/宜昌)
    { L"1390710", L"湖北武汉 移动" }, { L"1380710", L"湖北武汉 移动" }, { L"1350710", L"湖北武汉 移动" },
    { L"1300710", L"湖北武汉 联通" }, { L"1860270", L"湖北武汉 联通" }, { L"1330710", L"湖北武汉 电信" }, { L"1890710", L"湖北武汉 电信" },
    { L"1390727", L"湖北襄阳 移动" }, { L"1860710", L"湖北襄阳 联通" }, { L"1390720", L"湖北宜昌 移动" },
    // 湖南 (长沙/株洲/湘潭/衡阳)
    { L"1390731", L"湖南长沙 移动" }, { L"1380731", L"湖南长沙 移动" }, { L"1300731", L"湖南长沙 联通" }, { L"1860731", L"湖南长沙 联通" }, { L"1330731", L"湖南长沙 电信" }, { L"1890731", L"湖南长沙 电信" },
    { L"1390733", L"湖南株洲 移动" }, { L"1390732", L"湖南湘潭 移动" }, { L"1390734", L"湖南衡阳 移动" },
    // 山东 (济南/青岛/烟台/潍坊/临沂等)
    { L"1390531", L"山东济南 移动" }, { L"1380531", L"山东济南 移动" }, { L"1300531", L"山东济南 联通" }, { L"1860531", L"山东济南 联通" }, { L"1330531", L"山东济南 电信" },
    { L"1390532", L"山东青岛 移动" }, { L"1380532", L"山东青岛 移动" }, { L"1300532", L"山东青岛 联通" }, { L"1860532", L"山东青岛 联通" }, { L"1330532", L"山东青岛 电信" },
    { L"1390535", L"山东烟台 移动" }, { L"1860535", L"山东烟台 联通" }, { L"1390536", L"山东潍坊 移动" }, { L"1390539", L"山东临沂 移动" },
    // 福建 (福州/厦门/泉州)
    { L"1390500", L"福建福州 移动" }, { L"1380500", L"福建福州 移动" }, { L"1860591", L"福建福州 联通" }, { L"1330500", L"福建福州 电信" }, { L"1890500", L"福建福州 电信" },
    { L"1390600", L"福建厦门 移动" }, { L"1380600", L"福建厦门 移动" }, { L"1860592", L"福建厦门 联通" }, { L"1330600", L"福建厦门 电信" },
    { L"1390595", L"福建泉州 移动" }, { L"1380595", L"福建泉州 移动" }, { L"1860595", L"福建泉州 联通" },
    // 河南 (郑州/洛阳/新乡)
    { L"1390371", L"河南郑州 移动" }, { L"1380371", L"河南郑州 移动" }, { L"1300371", L"河南郑州 联通" }, { L"1860371", L"河南郑州 联通" }, { L"1330371", L"河南郑州 电信" },
    { L"1390379", L"河南洛阳 移动" }, { L"1860379", L"河南洛阳 联通" }, { L"1390373", L"河南新乡 移动" },
    // 陕西 (西安/咸阳)
    { L"1390920", L"陕西西安 移动" }, { L"1380920", L"陕西西安 移动" }, { L"1300910", L"陕西西安 联通" }, { L"1860290", L"陕西西安 联通" }, { L"1330928", L"陕西西安 电信" },
    { L"1390910", L"陕西咸阳 移动" },
    // 安徽 (合肥/芜湖)
    { L"1390551", L"安徽合肥 移动" }, { L"1380551", L"安徽合肥 移动" }, { L"1860551", L"安徽合肥 联通" }, { L"1330551", L"安徽合肥 电信" },
    { L"1390553", L"安徽芜湖 移动" },
    // 江西 (南昌/九江)
    { L"1390791", L"江西南昌 移动" }, { L"1380791", L"江西南昌 移动" }, { L"1860791", L"江西南昌 联通" }, { L"1330791", L"江西南昌 电信" },
    { L"1390792", L"江西九江 移动" },
    // 重庆
    { L"1390830", L"重庆 移动" }, { L"1380830", L"重庆 移动" }, { L"1300230", L"重庆 联通" }, { L"1860230", L"重庆 联通" }, { L"1330830", L"重庆 电信" },
    // 河北 (石家庄/唐山/保定)
    { L"1390311", L"河北石家庄 移动" }, { L"1380311", L"河北石家庄 移动" }, { L"1860311", L"河北石家庄 联通" }, { L"1330311", L"河北石家庄 电信" },
    { L"1390315", L"河北唐山 移动" }, { L"1390312", L"河北保定 移动" },
    // 山西 (太原)
    { L"1390341", L"山西太原 移动" }, { L"1380341", L"山西太原 移动" }, { L"1860341", L"山西太原 联通" },
    // 辽宁 (沈阳/大连)
    { L"1390400", L"辽宁沈阳 移动" }, { L"1380400", L"辽宁沈阳 移动" }, { L"1860240", L"辽宁沈阳 联通" }, { L"1330400", L"辽宁沈阳 电信" },
    { L"1390411", L"辽宁大连 移动" }, { L"1380411", L"辽宁大连 移动" }, { L"1860411", L"辽宁大连 联通" },
    // 吉林 (长春)
    { L"1390431", L"吉林长春 移动" }, { L"1380431", L"吉林长春 移动" }, { L"1860431", L"吉林长春 联通" },
    // 黑龙江 (哈尔滨)
    { L"1390451", L"黑龙江哈尔滨 移动" }, { L"1380451", L"黑龙江哈尔滨 移动" }, { L"1860451", L"黑龙江哈尔滨 联通" },
    // 云南 (昆明)
    { L"1390880", L"云南昆明 移动" }, { L"1380880", L"云南昆明 移动" }, { L"1860871", L"云南昆明 联通" },
    // 贵州 (贵阳)
    { L"1390851", L"贵州贵阳 移动" }, { L"1860851", L"贵州贵阳 联通" },
    // 广西 (南宁/桂林)
    { L"1390771", L"广西南宁 移动" }, { L"1380771", L"广西南宁 移动" }, { L"1860771", L"广西南宁 联通" },
    { L"1390773", L"广西桂林 移动" },
    // 海南 (海口)
    { L"1390750", L"海南海口 移动" }, { L"1860898", L"海南海口 联通" },
    // 甘肃 (兰州)
    { L"1390931", L"甘肃兰州 移动" }, { L"1860931", L"甘肃兰州 联通" },
    // 宁夏 (银川)
    { L"1390951", L"宁夏银川 移动" },
    // 青海 (西宁)
    { L"1390971", L"青海西宁 移动" },
    // 新疆 (乌鲁木齐)
    { L"1390991", L"新疆乌鲁木齐 移动" }, { L"1860991", L"新疆乌鲁木齐 联通" },
    // 西藏 (拉萨)
    { L"1390891", L"西藏拉萨 移动" }
};

// 全局变量
WNDPROC g_OldEditProc = NULL;
HWND hComboGlobal = NULL;

// 函数声明
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK EditSubclassProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
bool IsPrefixValid(const std::wstring& num, const std::vector<std::wstring>& prefixes);
std::wstring QueryLocation(const std::wstring& code, const std::wstring& number);

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

// 【全新精细化升级】查询城市及运营商归属地
std::wstring QueryLocation(const std::wstring& code, const std::wstring& number) {
    if (number.empty()) return L"未知";

    if (code == L"+86") {
        // 1. 优先执行前7位的精细化城市映射循环查询
        if (number.length() >= 7) {
            std::wstring p7 = number.substr(0, 7);
            size_t segCount = sizeof(g_ChinaSegments) / sizeof(g_ChinaSegments[0]);
            for (size_t i = 0; i < segCount; ++i) {
                if (p7 == g_ChinaSegments[i].prefix7) {
                    return g_ChinaSegments[i].location;
                }
            }
        }

        // 2. 如果前7位没有被核心城市库命中，则执行前3位段按省份/基础运营商信息兜底投递
        if (number.length() >= 3) {
            std::wstring p3 = number.substr(0, 3);
            if (p3 == L"130" || p3 == L"131" || p3 == L"132" || p3 == L"155" || p3 == L"156" || p3 == L"185" || p3 == L"186" || p3 == L"176" || p3 == L"166") return L"中国大陆 联通号段";
            if (p3 == L"133" || p3 == L"153" || p3 == L"180" || p3 == L"181" || p3 == L"189" || p3 == L"177" || p3 == L"173") return L"中国大陆 电信号段";
            if (p3 == L"134" || p3 == L"135" || p3 == L"136" || p3 == L"137" || p3 == L"138" || p3 == L"139" || p3 == L"150" || p3 == L"151" || p3 == L"152" || p3 == L"158" || p3 == L"159" || p3 == L"182" || p3 == L"183" || p3 == L"184" || p3 == L"187" || p3 == L"188" || p3 == L"178" || p3 == L"147") return L"中国大陆 移动号段";
            if (p3 == L"192") return L"中国广电";
            if (p3 == L"170" || p3 == L"171") return L"虚拟运营商";
        }
        return L"中国大陆";
    }
    else if (code == L"+852") {
        if (number[0] == L'4' || number[0] == L'7' || number[0] == L'8' || number[0] == L'9') return L"中国香港 (移动网络)";
        if (number[0] == L'5' || number[0] == L'6') return L"中国香港 (流动手提)";
        return L"中国香港";
    }
    else if (code == L"+853") return L"中国澳门";
    else if (code == L"+886") return L"中国台湾";
    else if (code == L"+1" && number.length() >= 3) {
        std::wstring area = number.substr(0, 3);
        if (area == L"212" || area == L"718" || area == L"917") return L"美国 纽约";
        if (area == L"213" || area == L"310" || area == L"626") return L"美国 洛杉矶";
        if (area == L"415" || area == L"650") return L"美国 旧金山/硅谷";
        if (area == L"312") return L"美国 芝加哥";
        if (area == L"416" || area == L"647") return L"加拿大 多伦多";
        if (area == L"604") return L"加拿大 温哥华";
        return L"北美地区";
    }
    else if (code == L"+81" && number.length() >= 2) {
        std::wstring p2 = number.substr(0, 2);
        if (p2 == L"90") return L"日本 (NTT Docomo/au/SoftBank)";
        if (p2 == L"80") return L"日本 (移动网络扩展段)";
        if (p2 == L"70") return L"日本 (PHS)";
        return L"日本";
    }

    return L"海外核心号段";
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

    // 合并输出归属地和估价
    std::wstring locationStr = QueryLocation(codeStr, number);
    return L"归属地: " + locationStr + L"  |  预计价值: " + std::wstring(country.currencySign) + std::to_wstring((int)finalScore);
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

        if (ch == VK_RETURN) {
            SendMessage(GetParent(hwnd), WM_COMMAND, MAKEWPARAM(IDC_BTN_ESTIMATE, BN_CLICKED), (LPARAM)GetDlgItem(GetParent(hwnd), IDC_BTN_ESTIMATE));
            return 0;
        }

        if (ch == VK_ESCAPE) {
            SendMessage(GetParent(hwnd), WM_COMMAND, MAKEWPARAM(IDC_BTN_CLEAR, BN_CLICKED), (LPARAM)GetDlgItem(GetParent(hwnd), IDC_BTN_CLEAR));
            return 0;
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