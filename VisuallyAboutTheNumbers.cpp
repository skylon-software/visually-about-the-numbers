/*

"Наглядно о числах" - Развивающяя программа для детей.


ИНФОРМАЦИЯ О ВЕРСИЯХ

Версия 2.0.4.3 (5 мая 2020 года)
- Большие слои иконки, не использующиеся в XP и 2000, упакованы в PNG. Вследствие чего размер приложения уменьшился с 41472 байт до 28672-х.

Версия 2.0.4.2 (30 сентября 2019 года)
- Исправлена ошибка с прорисовкой точек и сигналом переполнения после переключения на другую задачу (введена переменная NumEdited).

Версия 2.0.4.1 (28 сентября 2017 года)
- Исправлена ошибка с переполнением количества точек.

Версия 2.0.4.0 (27 сентября 2017 года)
- Переменная MinimizeControl больше не используется и удалена.

Версия 2.0.3.9 (27 сентября 2017 года)
- Точки теперь не перерисовываются каждый раз.
- Сообщение теперь "STATIC".

Версия 2.0.3.8 (28 октября 2016 года)
- Убраное смещение окна управления (зачем я его сделал?)
- Окно управления теперь задается по размеру своей клиентской части. Размер клиентской части теперь фиксированный, 460x120.
- Редактирование заголовка окна.

Версия 2.0.3.7 (22 июля 2013 года)
- Редактирование полей в файле VisuallyAboutTheNumbers.rc (блок VarFileInfo).

Версия 2.0.3.6 (11 июля 2012 года)
- Редактирование полей в файле VisuallyAboutTheNumbers.rc (знак ©).

Версия 2.0.3.5 (7 июля 2012 года)
- OverflowAlert больше не сигналит, если параметр не изменился (см. EN_UPDATE). Ранее простое перемещение каретки вызывало сигнал.
- "Прибрался" в исходном коде.

Версия 2.0.3.4 (6 июля 2012 года)
- Больше не сигналит при нажатии Enter как недопустимой клавиши.

Версия 2.0.3.3 (5 июля 2012 года)
- Исправлена ошибка с OverflowAlert = TRUE;

Версия 2.0.3.2 (29 июня 2012 года)
- переменная MinimizeControl теперь типа int, а не BOOL.

Версия 2.0.3.1 (28 июня 2012 года)
- Оптимизация.

Версия 2.0.3.0 (18 июня 2012 года)
- Оптимизация.

Версия 2.0.2.9 (8 июня 2012 года)
- Почистил исходник.
- Окно управления теперь без "WS_THICKFRAME", чтобы нельзя было изменять его размер.

Версия 2.0.2.8 (12 мая 2012 года)
- Английский текст изменен.

Версия 2.0.2.7 (11 мая 2012 года)
- Английский текст Александра Колногорова.

Версия 2.0.2.6 (9 мая 2012 года)
- Поддержка UNICODE.

Версия 2.0.2.5 (9 мая 2012 года)
- К русскому языку добавлены татарский и английский (язык по умолчанию).

Версия 2.0.2.4 (9 мая 2012 года)
- Начата локализация программы.

Версия 2.0.2.3 (8 мая 2012 года)
- Файл исходного текста переименован на VisuallyAboutTheNumbers.

Версия 2.0.2.2 (8 мая 2012 года)
- Переменная MinimizeProgram теперь не используется. Вместо нее - обработчик WM_ACTIVATEAPP.

Версия 2.0.2.1 (8 мая 2012 года)
- Окно hControlWnd теперь со стилем WS_POPUP.

Версия 2.0.2.0 (8 мая 2012 года)
- Edit Control теперь со стилем ES_NUMBER. Ранее фильтрация ввода была в программе.
- Добавлена функция EditProc, потому что программа не работала на некоторых компьютерах.

Версия 2.0.1.6 (22 октября 2011 года)
- Переписан цикл обработки сообщений.
- Изменен код, связанный с hDCScreen.

Версия 2.0.1.5 (20 октября 2011 года)
- Окно управления снова со стилем "WS_THICKFRAME" (некрасиво отображалось в Windows 2000).

Версия 2.0.1.4 (10 октября 2011 года)
- Правильное получение hInstance (значок программы теперь видно в окне и при
нажатии Alt+TAB).

Версия 2.0.1.3 (8 октября 2011 года)
- Спрятан адрес электронной почты.

Версия 2.0.1.2 (30 сентября 2011 года)
- Добавлен адрес электронной почты в заголовки окон и ресурс "VERSIONINFO".

Версия 2.0.1.1 (28 сентября 2011 года)
- Проверка на переполнение счетчика точек unsigned int NumPoints.

Версия 2.0.1.0 (28 сентября 2011 года)
- Появляется значок стрелки, если точки не влезают на экран

Версия 2.0.0.9 (28 сентября 2011 года)
- Программа больше не сигналит при каждой перерисовке окна с избыточным
количеством точек (BOOL OverflowAlert), а только один раз.
- Edit Control больше не сигналит при нажатии клавиши Enter.

Версия 2.0.0.8 (27 сентября 2011 года)
- Добавлена функция ExitProcess().

Версия 2.0.0.7 (27 сентября 2011 года)
- Окно управления теперь дочернее (WS_CHILD).

Версия 2.0.0.6 (26 сентября 2011 года)
- Новая иконка.

Версия 2.0.0.5 (26 сентября 2011 года)
- Позиции элементов окна hControlWnd теперь вычисляется.
- Окно hControlWnd теперь не "sizeable".

Версия 2.0.0.4 (23 сентября 2011 года)
- Обработка клавиш RWIN и LWIN.

Версия 2.0.0.3 (23 сентября 2011 года)
- Оптимизация.
- Подобраны параметры окна вывода точек (на Windows 2000 теперь не показывается
"Панель задач").

Версия 2.0.0.2 (22 сентября 2011 года)
- Сделан отступ по краям экрана. Теперь видно крайние точки на плохо настроенных
мониторах (особенно это касается CRT-мониторов).

Версия 2.0.0.1 (21 сентября 2011 года)
- DEFAULT_CHARSET в выводе текста.
- MessageBeep() вместо Beep().

Версия 2.0.0.0 (20 сентября 2011 года)
- Программа полностью переписана на языке "Си". Теперь среда разработки -
"Visual C++ 2008 Express Edition" (предыдущие версии были написаны на Delphi 7).
Размер уменьшился с 385536 байт до 8192 байт.

Версия 1.0.0.5
- Первый вариант программы, который меня относительно устраивал.

*/

#include <windows.h>

#define ID_EDIT 101
#define MAX_STRING_LENGTH 16384
#define BORDER 20
#define CLIENTWIDTH 460
#define CLIENTHEIGHT 120

HWND hControlWnd;
HWND hPointsWnd;
HWND N_textBox;
HWND hLabel;
HINSTANCE hInstance;
HFONT EditFont;
HFONT LabelFont;
unsigned int ScreenWidth;
unsigned int ScreenHeight;
char EnteredText[MAX_STRING_LENGTH];
unsigned int NumPoints;
BOOL OverflowAlert;
BOOL NumEdited;
TCHAR ControlWndCaption[] = TEXT("Наглядно о числах - Skylon Software <skylon@inbox.ru>");
WNDPROC DefEditProc;
TCHAR *HelpString;

LRESULT CALLBACK ControlWndProc(HWND hWnd,UINT message,WPARAM wParam, LPARAM lParam);

LRESULT CALLBACK PointsWndProc(HWND hWnd,UINT message,WPARAM wParam, LPARAM lParam);

int WinMainCRTStartup()
{
	HelpString = TEXT("How many dots to show?");
	LANGID language = GetUserDefaultLangID();
	if(language == 0x0419) HelpString = TEXT("Сколько точек показать?");
	if(language == 0x0444) HelpString = TEXT("Ничә нокта күрсәтәргә?");

	NumPoints = 0;
	OverflowAlert = FALSE;
	NumEdited = TRUE;

	EditFont = CreateFont(
		27,
		10,
		0,
		10,
		FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
		CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
		DEFAULT_PITCH | FF_ROMAN,
		TEXT("Courier New Bold")
		);

	LabelFont = CreateFont(
		28-1,
		12-1-1,
		0,
		10,
		FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
		CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
		DEFAULT_PITCH | FF_ROMAN,
		TEXT("Arial")
		);

	MSG msg;

	hInstance = GetModuleHandle(0);

	WNDCLASS pts;

	pts.lpszClassName = TEXT("VisuallyAboutNumbersPointsWindowClass");
	pts.cbClsExtra = 0;
	pts.cbWndExtra = 0;
	pts.hInstance = hInstance;
	pts.style = 0;
	pts.hIcon = LoadIcon(hInstance, TEXT("MAINICON"));
	pts.hCursor = LoadCursor(NULL, IDC_ARROW);
	pts.lpfnWndProc = PointsWndProc;
	pts.lpszMenuName = NULL;
	pts.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);

	RegisterClass(&pts);

	WNDCLASS cls;

	cls.lpszClassName = TEXT("VisuallyAboutNumbersControlWindowClass");
	cls.cbClsExtra = 0;
	cls.cbWndExtra = 0;
	cls.hInstance = hInstance;
	cls.style = 0;
	cls.hIcon = LoadIcon(hInstance, TEXT("MAINICON"));
	cls.hCursor = LoadCursor(NULL, IDC_ARROW);
	cls.lpfnWndProc = ControlWndProc;
	cls.lpszMenuName = NULL;
	cls.hbrBackground = (HBRUSH)(COLOR_BTNFACE + 1);

	RegisterClass(&cls);

	HDC hDCScreen = GetDC(NULL);
	ScreenWidth = GetDeviceCaps(hDCScreen, HORZRES);
	ScreenHeight = GetDeviceCaps(hDCScreen, VERTRES);;
	ReleaseDC(NULL, hDCScreen);

	hPointsWnd = CreateWindowEx(
		WS_EX_TOPMOST,
		TEXT("VisuallyAboutNumbersPointsWindowClass"),
		ControlWndCaption,
		WS_POPUP | WS_MINIMIZEBOX, // style
		0,
		0,
		ScreenWidth,	// Width
		ScreenHeight,	// Height
		NULL,
		NULL,
		hInstance,
		NULL
		);

	RECT ControlWndRect;
	ControlWndRect.left = (ScreenWidth - CLIENTWIDTH)/2;
	ControlWndRect.top = (ScreenHeight - CLIENTHEIGHT)/2;
	ControlWndRect.right = ControlWndRect.left + CLIENTWIDTH;
	ControlWndRect.bottom = ControlWndRect.top + CLIENTHEIGHT;
	AdjustWindowRect(
		&ControlWndRect,			// pointer to client-rectangle structure
		WS_CHILD | WS_POPUP | WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU /*| WS_THICKFRAME*/ | WS_MINIMIZEBOX,	// window styles
		FALSE					// menu-present flag
		);


	HWND hControlWnd = CreateWindowEx(
		0 /*| WS_EX_TOPMOST*/,
		TEXT("VisuallyAboutNumbersControlWindowClass"),
		ControlWndCaption,
		WS_CHILD | WS_POPUP | WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU /*| WS_THICKFRAME*/ | WS_MINIMIZEBOX,
		ControlWndRect.left,
		ControlWndRect.top,
		ControlWndRect.right - ControlWndRect.left,
		ControlWndRect.bottom - ControlWndRect.top,
		hPointsWnd,
		NULL,
		hInstance,
		NULL
		);

	ShowWindow(hPointsWnd, SW_SHOWNORMAL);
	UpdateWindow(hPointsWnd);

	ShowWindow(hControlWnd, SW_SHOWNORMAL);
	UpdateWindow(hControlWnd);

	while(GetMessage(&msg, NULL, NULL, NULL))
	{
		if(msg.hwnd == N_textBox)
			if(msg.message == WM_KEYDOWN)
				if(msg.wParam == VK_RETURN)
				{
					if (!GetWindowTextA(N_textBox, EnteredText, MAX_STRING_LENGTH)) continue;
					// GetWindowTextLength() function?
					NumPoints = 0;
					int position = 0;
					while(EnteredText[position] != 0) {
						if (NumPoints * 10 <= (0xFFFFFFFF / 10 - 1)) NumPoints *= 10; else break;
						NumPoints += (EnteredText[position] - 0x30);
						position++;
					}
					//InvalidateRect(hControlWnd, NULL, TRUE);
					if (NumEdited)
					{
						OverflowAlert = TRUE;
						InvalidateRect(hPointsWnd, NULL, TRUE);
					}
					NumEdited = FALSE;
					ShowWindow(hControlWnd, SW_SHOWMINIMIZED);
					//SetFocus(N_textBox);
					continue;
				}
				TranslateMessage(&msg);
				DispatchMessage(&msg);
	}
	ExitProcess(0);
}


LRESULT CALLBACK ControlWndProc(HWND hWnd,UINT message,WPARAM wParam,
								LPARAM lParam)
{
	switch(message)
	{
	case WM_CREATE:


		N_textBox = CreateWindowEx(
			WS_EX_CLIENTEDGE,
			TEXT("EDIT"),
			TEXT(""),
			WS_CHILD | WS_VISIBLE | ES_LEFT | ES_AUTOHSCROLL | ES_NUMBER,
			CLIENTWIDTH / 4,
			CLIENTHEIGHT / 2,
			CLIENTWIDTH / 2,
			34,
			hWnd,
			HMENU(ID_EDIT),
			hInstance,
			NULL
			);
		SendMessage(N_textBox, WM_SETFONT, (WPARAM)EditFont, TRUE);

		hLabel = CreateWindow(
			TEXT("STATIC"),	// pointer to registered class name
			HelpString,	// pointer to window name
			WS_CHILD | SS_CENTER,	// window style
			0,	// horizontal position of window
			CLIENTHEIGHT / 6,	// vertical position of window
			CLIENTWIDTH,	// window width
			CLIENTHEIGHT / 3,	// window height
			hWnd,	// handle to parent or owner window
			HMENU(ID_EDIT + 1),	// handle to menu or child-window identifier
			hInstance,	// handle to application instance
			NULL 	// pointer to window-creation data
			);

		SendMessage(hLabel, WM_SETFONT, (WPARAM)LabelFont, TRUE);
		ShowWindow(hLabel, SW_SHOWNORMAL);
		break;
	case WM_COMMAND:
		if (HIWORD(wParam) == EN_UPDATE)
			NumEdited = TRUE;
		break;
	case WM_ACTIVATE:
		SetFocus(N_textBox);
		break;
	case WM_PAINT:
		DefWindowProc(hWnd,message,wParam,lParam);
		SetFocus(N_textBox);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return(DefWindowProc(hWnd,message,wParam,lParam));
	}
	return(NULL);
}

LRESULT CALLBACK PointsWndProc(HWND hWnd,UINT message,WPARAM wParam,
							   LPARAM lParam)
{
	HDC hDC;
	PAINTSTRUCT ps;
	POINT Arrow[7] = {{20, 20}, {40, 20}, {40, 40}, {50, 40}, {30, 60}, {10, 40}, {20, 40}};
	HPEN ArrowPen;
	HBRUSH ArrowBrush;

	switch(message)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_ACTIVATEAPP:
		if(wParam == FALSE) ShowWindow(hWnd, SW_MINIMIZE);
		break;
	case WM_PAINT:
		unsigned int PntPoints, X, Y;
		PntPoints = NumPoints;
		X = BORDER;
		Y = BORDER;
		hDC = BeginPaint(hWnd, &ps);

		while (PntPoints > 0)
		{
			SetPixel(hDC, X, Y, 0xFFFFFF);
			PntPoints--;
			if (PntPoints == 0) break;
			X = X + 5;//4
			if (X >= (ScreenWidth - BORDER)) {
				X = BORDER;
				Y = Y + 5;
				if (Y >= (ScreenHeight - BORDER)) {
					for (int i = 0; i <7; i++)
					{
						Arrow[i].x += ScreenWidth-80;
						Arrow[i].y += ScreenHeight-70;
					}
					SelectObject(hDC, ArrowPen = CreatePen(PS_SOLID, 0, 0xffff));
					SelectObject(hDC, ArrowBrush = CreateSolidBrush(0xffff));
					Polygon(hDC, Arrow, 7);
					DeleteObject(ArrowPen);
					DeleteObject(ArrowBrush);

					if (OverflowAlert)
						MessageBeep(MB_ICONEXCLAMATION);
					OverflowAlert = FALSE;
					break;
				}
			}
		}
		EndPaint(hWnd,&ps);
		OverflowAlert = FALSE;
		break;
	default:
		return(DefWindowProc(hWnd,message,wParam,lParam));
	}
	return(NULL);
}

