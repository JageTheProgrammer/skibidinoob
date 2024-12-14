#include "gt.hpp"
#include "packet.h"
#include "server.h"
#include "utils.h"

std::string gt::flag = "fi";
bool gt::resolving_uid2 = false;
bool gt::connecting = false;
bool gt::in_game = false;
bool gt::ghost = false;
bool gt::resolving_uid = false;
bool gt::aapbypass = false;
bool gt::ruzgar = false;
bool gt::noclip = false;
bool gt::doublejump = false;
bool gt::autocollect = false;
int gt::ac_range = 10;
int gt::path_amount = 0;
string gt::hotkey1 = "";
string gt::hotkey2 = "";
string gt::hotkey3 = "";
string gt::hotkey4 = "";
string gt::hotkey5 = "";
string gt::hotkey6 = "";
string gt::hotkey7 = "";
string gt::hotkey8 = "";
string gt::hotkey9 = "";
string gt::hotkey10 = "";
string gt::hotkey11 = "";
string gt::hotkey12 = "";
bool gt::noclip2 = false;
int gt::block_id = 0;
int gt::max_dropped_block = 0;
extern int max_dropped_block;
bool gt::showxy = false;
bool gt::updateinv = false;
extern int wlbalance;

void gt::send_log(std::string text) {
    g_server->send(true, "action|log\nmsg|" + text, NET_MESSAGE_GAME_MESSAGE);
}

void gt::solve_captcha(std::string text) {
    //Get the sum :D
    utils::replace(text,
        "set_default_color|`o\nadd_label_with_icon|big|`wAre you Human?``|left|206|\nadd_spacer|small|\nadd_textbox|What will be the sum of the following "
        "numbers|left|\nadd_textbox|",
        "");
    utils::replace(text, "|left|\nadd_text_input|captcha_answer|Answer:||32|\nend_dialog|captcha_submit||Submit|", "");
    auto number1 = text.substr(0, text.find(" +"));
    auto number2 = text.substr(number1.length() + 3, text.length());
    int result = atoi(number1.c_str()) + atoi(number2.c_str());
    send_log("Solved captcha as `2" + std::to_string(result) + "``");
    g_server->send(false, "action|dialog_return\ndialog_name|captcha_submit\ncaptcha_answer|" + std::to_string(result));
}
