#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <termios.h>

#define SAY(str) write(STDOUT_FILENO, str, strlen(str))

int main()
{
    unsigned char x, y, d;
    struct termios raw, cooked;

    /* Set d if user clicks inside palette */
    d = 0;

    /* Uncook terminal (raw) */
    tcgetattr(STDIN_FILENO, &cooked);
    raw = cooked;
    raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
    
    /* Set up ANSI escapes */
    SAY("\x1b[?1049h" /* enable alternative buffer */
        "\x1b[?25l"   /* disable cursor */
        "\x1b[?1000h" /* enable mouse mode */
        "\x1b[H");    /* place cursor top-left */

    /* Draw palette */
    SAY("\x1b[H");
    SAY("\x1b[0m\n \x1b[48;5;16m  " "\x1b[48;5;17m  " "\x1b[48;5;18m  " "\x1b[48;5;19m  " "\x1b[48;5;20m  " "\x1b[48;5;21m  " "\x1b[48;5;22m  " "\x1b[48;5;23m  " "\x1b[48;5;24m  " "\x1b[48;5;25m  " "\x1b[48;5;26m  " "\x1b[48;5;27m  " "\x1b[48;5;28m  " "\x1b[48;5;29m  " "\x1b[48;5;30m  " "\x1b[48;5;31m  " "\x1b[48;5;32m  " "\x1b[48;5;33m  " "\x1b[48;5;34m  " "\x1b[48;5;35m  " "\x1b[48;5;36m  " "\x1b[48;5;37m  " "\x1b[48;5;38m  " "\x1b[48;5;39m  " "\x1b[48;5;40m  " "\x1b[48;5;41m  " "\x1b[48;5;42m  " "\x1b[48;5;43m  " "\x1b[48;5;44m  " "\x1b[48;5;45m  " "\x1b[48;5;46m  " "\x1b[48;5;47m  " "\x1b[48;5;48m  " "\x1b[48;5;49m  " "\x1b[48;5;50m  " "\x1b[48;5;51m  " );
    SAY("\x1b[0m\n \x1b[48;5;52m  " "\x1b[48;5;53m  " "\x1b[48;5;54m  " "\x1b[48;5;55m  " "\x1b[48;5;56m  " "\x1b[48;5;57m  " "\x1b[48;5;58m  " "\x1b[48;5;59m  " "\x1b[48;5;60m  " "\x1b[48;5;61m  " "\x1b[48;5;62m  " "\x1b[48;5;63m  " "\x1b[48;5;64m  " "\x1b[48;5;65m  " "\x1b[48;5;66m  " "\x1b[48;5;67m  " "\x1b[48;5;68m  " "\x1b[48;5;69m  " "\x1b[48;5;70m  " "\x1b[48;5;71m  " "\x1b[48;5;72m  " "\x1b[48;5;73m  " "\x1b[48;5;74m  " "\x1b[48;5;75m  " "\x1b[48;5;76m  " "\x1b[48;5;77m  " "\x1b[48;5;78m  " "\x1b[48;5;79m  " "\x1b[48;5;80m  " "\x1b[48;5;81m  " "\x1b[48;5;82m  " "\x1b[48;5;83m  " "\x1b[48;5;84m  " "\x1b[48;5;85m  " "\x1b[48;5;86m  " "\x1b[48;5;87m  " );
    SAY("\x1b[0m\n \x1b[48;5;88m  " "\x1b[48;5;89m  " "\x1b[48;5;90m  " "\x1b[48;5;91m  " "\x1b[48;5;92m  " "\x1b[48;5;93m  " "\x1b[48;5;94m  " "\x1b[48;5;95m  " "\x1b[48;5;96m  " "\x1b[48;5;97m  " "\x1b[48;5;98m  " "\x1b[48;5;99m  " "\x1b[48;5;100m  ""\x1b[48;5;101m  ""\x1b[48;5;102m  ""\x1b[48;5;103m  ""\x1b[48;5;104m  ""\x1b[48;5;105m  ""\x1b[48;5;106m  ""\x1b[48;5;107m  ""\x1b[48;5;108m  ""\x1b[48;5;109m  ""\x1b[48;5;110m  ""\x1b[48;5;111m  ""\x1b[48;5;112m  ""\x1b[48;5;113m  ""\x1b[48;5;114m  ""\x1b[48;5;115m  ""\x1b[48;5;116m  ""\x1b[48;5;117m  ""\x1b[48;5;118m  ""\x1b[48;5;119m  ""\x1b[48;5;120m  ""\x1b[48;5;121m  ""\x1b[48;5;122m  ""\x1b[48;5;123m  ");
    SAY("\x1b[0m\n \x1b[48;5;124m  ""\x1b[48;5;125m  ""\x1b[48;5;126m  ""\x1b[48;5;127m  ""\x1b[48;5;128m  ""\x1b[48;5;129m  ""\x1b[48;5;130m  ""\x1b[48;5;131m  ""\x1b[48;5;132m  ""\x1b[48;5;133m  ""\x1b[48;5;134m  ""\x1b[48;5;135m  ""\x1b[48;5;136m  ""\x1b[48;5;137m  ""\x1b[48;5;138m  ""\x1b[48;5;139m  ""\x1b[48;5;140m  ""\x1b[48;5;141m  ""\x1b[48;5;142m  ""\x1b[48;5;143m  ""\x1b[48;5;144m  ""\x1b[48;5;145m  ""\x1b[48;5;146m  ""\x1b[48;5;147m  ""\x1b[48;5;148m  ""\x1b[48;5;149m  ""\x1b[48;5;150m  ""\x1b[48;5;151m  ""\x1b[48;5;152m  ""\x1b[48;5;153m  ""\x1b[48;5;154m  ""\x1b[48;5;155m  ""\x1b[48;5;156m  ""\x1b[48;5;157m  ""\x1b[48;5;158m  ""\x1b[48;5;159m  ");
    SAY("\x1b[0m\n \x1b[48;5;160m  ""\x1b[48;5;161m  ""\x1b[48;5;162m  ""\x1b[48;5;163m  ""\x1b[48;5;164m  ""\x1b[48;5;165m  ""\x1b[48;5;166m  ""\x1b[48;5;167m  ""\x1b[48;5;168m  ""\x1b[48;5;169m  ""\x1b[48;5;170m  ""\x1b[48;5;171m  ""\x1b[48;5;172m  ""\x1b[48;5;173m  ""\x1b[48;5;174m  ""\x1b[48;5;175m  ""\x1b[48;5;176m  ""\x1b[48;5;177m  ""\x1b[48;5;178m  ""\x1b[48;5;179m  ""\x1b[48;5;180m  ""\x1b[48;5;181m  ""\x1b[48;5;182m  ""\x1b[48;5;183m  ""\x1b[48;5;184m  ""\x1b[48;5;185m  ""\x1b[48;5;186m  ""\x1b[48;5;187m  ""\x1b[48;5;188m  ""\x1b[48;5;189m  ""\x1b[48;5;190m  ""\x1b[48;5;191m  ""\x1b[48;5;192m  ""\x1b[48;5;193m  ""\x1b[48;5;194m  ""\x1b[48;5;195m  ");
    SAY("\x1b[0m\n \x1b[48;5;196m  ""\x1b[48;5;197m  ""\x1b[48;5;198m  ""\x1b[48;5;199m  ""\x1b[48;5;200m  ""\x1b[48;5;201m  ""\x1b[48;5;202m  ""\x1b[48;5;203m  ""\x1b[48;5;204m  ""\x1b[48;5;205m  ""\x1b[48;5;206m  ""\x1b[48;5;207m  ""\x1b[48;5;208m  ""\x1b[48;5;209m  ""\x1b[48;5;210m  ""\x1b[48;5;211m  ""\x1b[48;5;212m  ""\x1b[48;5;213m  ""\x1b[48;5;214m  ""\x1b[48;5;215m  ""\x1b[48;5;216m  ""\x1b[48;5;217m  ""\x1b[48;5;218m  ""\x1b[48;5;219m  ""\x1b[48;5;220m  ""\x1b[48;5;221m  ""\x1b[48;5;222m  ""\x1b[48;5;223m  ""\x1b[48;5;224m  ""\x1b[48;5;225m  ""\x1b[48;5;226m  ""\x1b[48;5;227m  ""\x1b[48;5;228m  ""\x1b[48;5;229m  ""\x1b[48;5;230m  ""\x1b[48;5;231m  ");

    /* Keep meta-data if user clicks inside palette */
    if ((getchar() == 27) && (getchar() == '[') && (getchar() == 'M') && (getchar() == ' ')) {
        x = getchar(); y = getchar();
        if ((x > 33) && (y > 33) && (x < 106) && (y < 40)) {
            d = 16 + 36*(y-34) + 6*((x-34)/2/6) + ((x-34)/2%6);
        }
    }
    
    /* Reverse ANSI escapes */
    SAY("\x1b[?25h"   /* enable cursor */
        "\x1b[?1049l" /* disable alternative buffer */
        "\x1b[?1000l" /* disable mouse mode */
    );

    /* Cook terminal */
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &cooked);

    /* Print helpfull information if user clicked inside palette */
    if (d > 0) {
        printf("HTML......: #%02X%02X%02X"              "\x1b[0m\n", (y-34)*0x33, ((x-34)/2/6)*0x33, ((x-34)/2%6)*0x33);
        printf("Foreground: \x1b[38;5;%dm\\x1b[38;5;%dm""\x1b[0m\n", d, d);
        printf("Background: \x1b[48;5;%dm\\x1b[48;5;%dm""\x1b[0m\n", d, d);
    }

    return 0;
}
