#include "events.h"
#include "gt.hpp"
#include "proton/hash.hpp"
#include "proton/rtparam.hpp"
#include "proton/variant.hpp"
#include "server.h"
#include "utils.h"
#include <thread>
#include <limits.h>
#include "HTTPRequest.hpp"
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httplib.h"
#include "dialog.h"
#include "Discord.h"
using namespace std;
string myname;
bool son = false;
bool enabled_color = false;
int delay = 4000;
std::string swxs = "0";
bool hostermode = false;
std::string old_world = "EXIT";
bool nodialog = false;
bool wrench = false;
bool fastdrop = false;
bool ssup = false;
bool doublejump = false;
float speed_x = 250.0f;

float speed_y = 1000.0f;
bool fasttrash = false;
bool gravty = false;
bool pathfinder = false;
bool antigravity = false;
bool grav = false;
std::string backas = "";
std::string pullfal = "0";
std::string allfal = "0";
std::string pallfal = "0";
std::string banfal = "0";
bool keybinds = false;
std::string backas1 = "";
std::string name1;
std::string player1x = "";
std::string player1y = "";
std::string player2x = "";
std::string player2y = "";
std::string player1boxy = "";
bool cgems = false;
std::string player1boxx = "";
std::string player2boxx = "";
std::string player2boxy = "";
bool dav = false;
bool dawall = false;
bool autobgl = false;
string lidb = "0";
string fakewlcount = "";
string spam_text = "Hello.";
bool startspam = false;
std::string spam1;
int eff_flags1 = 0;
int eff_flags2 = 0;
bool asurg = false;
bool dawas = false;
bool daw2 = false;
std::string country = "";
bool spam = false;
bool banas = false;
bool autoaccc = false;
bool fastmode = false;
bool taxsystem = false;
bool pulas = false;
bool spaminterval = false;
bool coloredtext = false;
bool shatter = false;
bool unaccess = false;
bool realfake = false;
bool dwl = false;
bool wlpage = false;
bool ddl = false;
bool phone = false;
bool dbgl = false;
bool modexit = false;
bool gaspull = false;
bool autobanfire = false;
bool modunaccess = false;
bool pullbynames = false;
bool banbynames = false;
bool compress = false;
bool blink = false;
string spam_delay = "4000";
bool startedBlink = false;
string name2;
string name3;
bool ac = false;
bool dawcnt = false;
bool all = false;
bool cd = false;
string fakecount = "";
string fakeitem = "";
bool nopulldialog = false;
bool pulus = false;
bool banus = false;
bool banallmod = false;
bool exitmod = false;
bool unaccmod = false;
bool dropwl = false;
string name4 = "";
string name5 = "";
int amountvend = 1;
int spamtx;
string items;
bool fastvend = false;
std::string pulln = "";
std::string aspam = "Hello";
std::string bann = "";
bool wlbalancex = false;
bool dropdl = false;
bool dropbgl = false;
string spin = "";
int wl;
bool updateinv = false;
bool autoacc = false;
bool moddetect = false;
bool autocollect = false;
bool plystate = false;
std::string p1x = "";
std::string p1y = "";
std::string p2x = "";
std::string p2y = "";
std::string swx = "0";
bool events::out::variantlist(gameupdatepacket_t* packet) {
    variantlist_t varlist{};
    varlist.serialize_from_mem(utils::get_extended(packet));
    PRINTS("varlist: %s\n", varlist.print().c_str());
    return false;
}
std::vector<std::string> split(const std::string& str, const std::string& delim)
{
    std::vector<std::string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == std::string::npos) pos = str.length();
        std::string token = str.substr(prev, pos - prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    } while (pos < str.length() && prev < str.length());
    return tokens;
}
void proxypack() {
    Dialog a;
    a.addLabelWithIcon("`#VISUAL PROXY `9Commands", 1796, LABEL_SMALL);
    a.addSpacer(SPACER_SMALL);
    a.addCustom("add_url_button||`cProxy Discord Server``|NOFLAGS|https://discord.gg/KsAfTk2JTu");
    a.addTextBox("`9Credits: `#Vetua._. / Joakim / All Supporters");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Commands:");
    a.addTextBox("`2/proxy `9(Commands)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Auto Pull:");
    a.addTextBox("`2/autopull `9(Auto Pull)");
    a.addTextBox("`2/autoban `9(Auto Ban)");
    a.addTextBox("`2/autolist `9(Check Auto Pull List)");
    a.addTextBox("`2/pullname `9(Enable Auto Pull Specific Player)");
    a.addTextBox("`2/setpull1 `9(Set pull target 1)");
    a.addTextBox("`2/setpull2 `9(Set pull target 2)");
    a.addTextBox("`2/setpull3 `9(Set pull target 3)");
    a.addTextBox("`2/setpull4 `9(Set pull target 4)");
    a.addTextBox("`2/setpull5 `9(Set pull target 5)");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Auto Spam:");
    a.addTextBox("`2/spam `9(Toggles auto spam page)");
    a.addTextBox("`2// `9(Enable auto spam)");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Visual Commands:");
    a.addTextBox("`2/seth `9(Enables @Seth Title)|left");
    a.addTextBox("`2/caitriona `9(Enables @Caitriona Title)|left");
    a.addTextBox("`2/legend `9(Enables Legendary Title)|left");
    a.addTextBox("`2/maxlevel `9(Enables max level Title)|left");
    a.addTextBox("`2/mentor `9(Enables mentor Title)|left");
    a.addTextBox("`2/g4g `9(Enables g4g Title)|left");
    a.addTextBox("`2/name (NAME) `9(Enables Name whats typed.)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Casino:");
    a.addTextBox("`2/autotax`9 (Enable Auto Tax)|left");
    a.addTextBox("`2/fmode `9(Enable Fast Mode) (Fast Drop for autotax)|left");
    a.addTextBox("`2/settax `5[amount]`9 (Set tax amount %)|left");
    a.addTextBox("`2/taxinfo `9(See Tax Info)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Auto Surg:");
    a.addTextBox("`2/surg `9(Enable Auto Surg)");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Vending:|left");
    a.addTextBox("`2/vend `9(Show Vend Options)|left");
    a.addTextBox("`2/fastvend `9(Enable/Disable Fast Vend)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Spinning:");
    a.addTextBox("`2/realspin `9(Show REAL, FAKE spin)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Change BGL:");
    a.addTextBox("`2/autobgl `9(Enable fast change bgl)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Skin Changer:");
    a.addTextBox("`2/skin `5[id] `9(Change Skin To Skin ID)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Save Commands:");
    a.addTextBox("`2/save `9(Save Current Settings/Options/Commands)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Dropping Commands:");
    a.addTextBox("`2/fd `9(Enable Fast Drop)|left");
    a.addTextBox("`2/ft `9(Enable Fast Trash/Recycle)|left");
    a.addTextBox("`2/dropall `9(Drop all items from inventory)|left");
    a.addTextBox("`2/dropall1 `9(Drop all items from inventory with count 1)|left");
    a.addTextBox("`2/cd`9 & `2/cdrop `5[amount] `9(Custom Drop)|left");
    a.addTextBox("`2/dd & /ddrop `5[amount] `9(Drop DL & BGL by amount)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Auto Commands:");
    a.addTextBox("`2/autoacc `9(Auto Take Access)");
    a.addTextBox("`2/gp `9(if someone say gas u will pull the player)");
    a.addTextBox("`2/north `9(Warps Team North's Link)");  
    a.addTextBox("`2/flow `9(Warps Team Flow's Link)");
    a.addTextBox("`2/modtest `9(Mod Detect Test) `9[Easy `4SHADOWBAN`9]|left");
    a.addTextBox("`2/detector `9(Mod Detect (Shortcut)|left");
    a.addTextBox("`2/modexit `9(Auto Leave when mod joins)|left");
    a.addTextBox("`2/modunacc `9(Auto Unaccess when mod joins)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Wrench Commands:");
    a.addTextBox("`2/wrench (Change wrench mode)|left");
    a.addTextBox("`2/wm `9(Enable/Disable Wrench mode)|left");
    a.addSpacer(SPACER_SMALL);
    a.addTextBox("`9Normal Commands:|left");
    a.addTextBox("`2/options `9(Options Page)|left");
    a.addTextBox("`2/fakeban `9(Fake `4Suspend)|left");
    a.addTextBox("`2/blink `9(Toggle Blink mode on/off)|left");
    a.addTextBox("`2/speed `9(Toggle Speed Page.)|left");
    a.addTextBox("`2/discord `9(Opens Discord Server link)|left");
    a.addTextBox("`2/relog `9(Relog To current world)|left");
    a.addTextBox("`2/uid `5[name] `9(Resolve Target UID)|left");
    a.addTextBox("`2/flag `5[id] `9(Change Flag To Item ID)|left");
    a.addTextBox("`2/country `5[key] `9(Change Flag To Other Country)|left");
    a.addTextBox("`2/warp `5[world] `9(Warp To Other World)|left");
    a.addTextBox("`2/pullall `9(Pull All Player In Same World)|left");
    a.addTextBox("`2/banall `9(Ban All Player In Same World)|left");
    a.addQuickExit();
    a.endDialog("optionlsls", "Cancel", "Okay");
    variantlist_t vlist{ "OnDialogRequest" };
    vlist[1] = a.finishDialog();
    g_server->send(true, vlist);
}
void force() {
    Sleep(300);
    fastdrop = false;
}

int balance() {
    int wl = 0;
    wl += g_server->local_player.inventory2.getItemCount(242);
    wl += g_server->local_player.inventory2.getItemCount(1796) * 100;
    wl += g_server->local_player.inventory2.getItemCount(7188) * 10000;
    return wl;
}

int item_count(int itemid) {
    int wl = g_server->local_player.inventory2.getItemCount(itemid);
    return wl;
}
bool daw()
{
    if (item_count(242) > 0) {
        dropwl = true;
        g_server->send(false, "action|drop\n|itemID|242");
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|242|\ncount|" + to_string(item_count(242))); //242
    }
    if (item_count(1796) > 0) {
        dropdl = true;
        g_server->send(false, "action|drop\n|itemID|1796");
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + to_string(item_count(1796))); //242
    }
    if (item_count(7188) > 0) {
        dropwl = true;
        g_server->send(false, "action|drop\nitemID|7188");
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|7188|\ncount|" + to_string(item_count(7188))); //242
    }
    return true;
}
void detect() {
    //gt::send_log("`#@Moderator `5just joined this world with name`0: " + growid);
    variantlist_t joakimonhomo{ "OnAddNotification" };
    joakimonhomo[1] = "interface/science_button.rttex";
    joakimonhomo[2] = "`#@Moderator `4Just joined the world.";
    joakimonhomo[3] = "audio/hub_open.wav";
    g_server->send(true, joakimonhomo);
    if (unaccmod) {
        g_server->send(false, "action|input\n|text|/unaccess");
        unaccess = true;
        g_server->send(false, "action|dialog_return\ndialog_name|unaccess");
    }
    if (exitmod) {
        g_server->send(false, "action|join_request\nname|exit", 3);
        return;
    }
    return;
}
void do_auto_collect() {
    if (g_server->m_world.connected) {
        auto pos2f = g_server->local_player.GetPos();
        for (const auto& object : g_server->m_world.objects) {
            if (utils::isInside(object.second.pos.m_x, object.second.pos.m_y, 5 * 32, pos2f.m_x, pos2f.m_y)) {
                gameupdatepacket_t packet{ 0 };
                packet.m_vec_x = object.second.pos.m_x;
                packet.m_vec_y = object.second.pos.m_y;
                packet.m_type = 11;
                packet.m_player_flags = -1;
                packet.m_int_data = object.second.uid;
                packet.m_state1 = object.second.pos.m_x + object.second.pos.m_y + 4;

                g_server->send(false, NET_MESSAGE_GAME_PACKET, reinterpret_cast<uint8_t*>(&packet), sizeof(gameupdatepacket_t));
            }
        }
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
}
int yuzde = 10;
bool events::out::pingreply(gameupdatepacket_t* packet) {
    //since this is a pointer we do not need to copy memory manually again
    packet->m_type = 21;
    packet->m_vec2_x = 1000.f;  //gravity
    packet->m_vec2_y = 250.f;   //move speed
    packet->m_vec_x = 64.f;     //punch range
    packet->m_vec_y = 64.f;     //build range
    packet->m_jump_amount = 0;  //for example unlim jumps set it to high which causes ban
    packet->m_player_flags = 0; //effect flags. good to have as 0 if using mod noclip, or etc.
    return false;
}
void DropItem(int id, int count) {
    g_server->send(false, "action|drop\n|itemID|" + to_string(id));
    g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|" + to_string(id) + "|\ncount|" + to_string(count));
}
void spammer() {
    while (spam) {
        const string wordList[8] = { "`2", "`3", "`4", "`#", "`9", "`8", "`c", "`6" };
        string word = wordList[rand() % 8];
        g_server->send(false, "action|input\n|text|" + word + spam_text);
        std::this_thread::sleep_for(std::chrono::milliseconds(stoi(spam_delay)));
    }
}
void apb() {
    Sleep(200);
    nopulldialog = false;
}
void reportmod(string netid) {
    nopulldialog = true;
    g_server->send(false, "action|wrench\n|netid|" + netid);
    g_server->send(false, "action|dialog_return\ndialog_name|popup\nnetID|" + netid + "|\nbuttonClicked|report_player");
    g_server->send(false, "action|dialog_return\ndialog_name|reportthisplayer\nreported_grow_id|" + netid + "|\nreport_reason|dtct");
    thread(apb).detach();
    return;
}
void startBlink() {
    startedBlink = true;
    while (blink) {
        std::vector<uint32_t> Skinlist;

        Skinlist = { 1348237567, 1685231359, 2022356223, 2190853119, 2527912447, 2864971775, 3033464831, 3370516479 };
        std::this_thread::sleep_for(std::chrono::milliseconds(385));
        string color = "action|setSkin\ncolor|" + std::to_string(Skinlist.at(utils::random(0, 7)));
        g_server->send(false, color);
    }
}
void autoacca() {
    Sleep(500);
    nopulldialog = false;
    autoaccc = false;
}
void compresswltodl() {
    gameupdatepacket_t packet{};
    packet.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
    packet.m_int_data = 242;
    g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&packet, sizeof(gameupdatepacket_t));
    return;
}
void shatterdltowl() {
    gameupdatepacket_t packet{};
    packet.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
    packet.m_int_data = 1796;
    g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&packet, sizeof(gameupdatepacket_t));
    return;
}
bool find_command(std::string chat, std::string name) {
    bool found = chat.find("/" + name) == 0;
    if (found)
        gt::send_log("`6" + chat);
    return found;
}
void daww() {
    for (server::Item& item : server::inventory) {
        if (item.id == 242 || item.id == 1796 || item.id == 7188) {
            gt::send_log("`9Dropping " + to_string(item.count) + " wls");
            Sleep(100);
            DropItem(item.id, item.count);
            //gt::send_log("`9Dropping " + to_string(item.count) + " WLS & " + to_string(item.count) + " DLS & " + to_string(item.count) + " BGLS.");
            gt::updateinv = false;
        }
    }
}
std::string mode = "`5Pull";

bool itsmod(int netid, std::string growid = "")
{
    if (netid == g_server->m_world.local.netid)
        return false;
    else if (growid.find(g_server->m_world.local.name) != std::string::npos)
        return false;
    std::this_thread::sleep_for(std::chrono::milliseconds(20));
    for (auto g : g_server->m_world.players)
    {
        std::this_thread::sleep_for(std::chrono::microseconds(5));
        std::transform(g.name.begin(), g.name.end(), g.name.begin(), [](unsigned char c) { return std::tolower(c); });
        if (netid == g.netid)
            return false;
        else if (growid.find(g.name) != std::string::npos)
            return false;
    }
    std::string name = "EXIT";
    gt::send_log("Mod Joined the World.");
    g_server->send(false, "action|join_request\nname|" + name, 3);
    return true;
}
bool events::out::generictext(std::string packet) {
    if (!packet.find("tankIDPass|"))
        PRINTS("Generic text: %s\n", packet.c_str());
    auto& world = g_server->m_world;
    rtvar var = rtvar::parse(packet);
    if (!var.valid())
        return false;
    if (packet.find("buttonClicked|getItem-") != -1) {
        string itemId = packet;
        utils::replace(itemId, "action|dialog_return", "");
        utils::replace(itemId, "dialog_name|end", "");
        utils::replace(itemId, "dialog_name|end", "");
        utils::replace(itemId, "buttonClicked|getItem-", "");
        utils::replace(itemId, "-", "");

        gameupdatepacket_t data{};
        data.m_type = 13;
        data.m_count = 1;
        data.m_int_data = std::stoi(itemId);
        g_server->send(true, 4, (uint8_t*)&data, sizeof(data));

    }
    if (packet.find("buttonClicked|v1") != -1) {
        variantlist_t var{ "OnSetClothing" };
        //var[1] = 0.0f, 0.0f, 0.0f;
        //var[2] = 0.0f, 0.0f, 0.0f;
        var[3] = 1784.0f, 0.0f, 0.0f;
        var[4] = 0x8295c3ff;
        //var[5] = 0.0f, 0.0f, 0.0f;
        g_server->send(true, var, world.local.netid, -1);
        return true;
    }
    if (packet.find("buttonClicked|v2") != -1) {
        variantlist_t var{ "OnSetClothing" };
        //var[1] = 0.0f, 0.0f, 0.0f;
        var[2] = 0.0f, 0.0f, 2592.0f;
        //var[3] = 0.0f, 0.0f, 0.0f;
        var[4] = 0x8295c3ff;
        //var[5] = 0.0f, 0.0f, 0.0f;
        g_server->send(true, var, world.local.netid, -1);
        return true;
    }
    if (packet.find("spam_text") != -1) {
        try {
            if (packet.find("c_text|") != -1) {
                std::string aaa = packet.substr(packet.find("ext|") + 4, packet.size());
                std::string number = aaa.c_str();
                while (!number.empty() && isspace(number[number.size() - 1]))
                    number.erase(number.end() - (76 - 0x4B));
                enabled_color = stoi(number);
            }
            if (packet.find("auto_enable|") != -1) {
                std::string aaa = packet.substr(packet.find("ble|") + 4, packet.size());
                std::string number = aaa.c_str();
                while (!number.empty() && isspace(number[number.size() - 1]))
                    number.erase(number.end() - (76 - 0x4B));
                son = stoi(number);
            }
            if (packet.find("spam_msg|") != -1) {
                std::string msg = packet.substr(packet.find("spam_msg|") + 9, packet.length() - packet.find("spam_msg") - 1);
                aspam = msg;
            }
            if (packet.find("delay_msg|") != -1) {
                std::string msg = packet.substr(packet.find("delay_msg|") + 10, packet.length() - packet.find("delay_msg") - 1);
                delay = stoi(msg);
            }

        }
        catch (exception a) {
            std::cout << "error?";
            std::cout << a.what();
        }
        return true;
    }
    /*if (packet.find("spam_page") != -1) {
        if (packet.find("coloredtext") != -1) {
            try {
                std::string aaa = packet.substr(packet.find("ext|") + 4, packet.size());
                std::string number = aaa.c_str();
                while (!number.empty() && isspace(number[number.size() - 1]))
                    number.erase(number.end() - (76 - 0x4B));
                enabled_color= stoi(number);
            }
            catch (exception a)
            {
                gt::send_log("`4Critical Error: `2override detected");

            }
        }
        delay = std::stoi(packet.substr(packet.find("message_8|") + 10, packet.length() - packet.find("message_8|") - 1));
        aspam = std::stoi(packet.substr(packet.find("message_9|") + 10, packet.length() - packet.find("message_9|") - 1));
        return true;
    }*/
    if (packet.find("buttonClicked|v3") != -1) {
        variantlist_t var{ "OnSetClothing" };
        var[1] = 0.0f, 1780.0f, 0.0f;
        //var[2] = 0.0f, 0.0f, 0.0f;
        //var[3] = 1784.0f, 0.0f, 0.0f;
        var[4] = 0x8295c3ff;
        //var[5] = 0.0f, 0.0f, 0.0f;
        g_server->send(true, var, world.local.netid, -1);
        return true;
    }
    if (packet.find("buttonClicked|v4") != -1) {
        variantlist_t var{ "OnSetClothing" };
        //var[1] = 0.0f, 0.0f, 0.0f;
        var[2] = 0.0f, 0.0f, 1782.0f;
        //var[3] = 1784.0f, 0.0f, 0.0f;
        var[4] = 0x8295c3ff;
        //var[5] = 0.0f, 0.0f, 0.0f;
        g_server->send(true, var, world.local.netid, -1);
        return true;
    }
    if (packet.find("buttonClicked|v5") != -1) {
        variantlist_t var{ "OnSetClothing" };
        //var[1] = 0.0f, 0.0f, 0.0f;
        //var[2] = 0.0f, 0.0f, 0.0f;
        var[3] = 1460.0f, 0.0f, 0.0f;
        var[4] = 0x8295c3ff;
        //var[5] = 0.0f, 0.0f, 0.0f;
        g_server->send(true, var, world.local.netid, -1);
        return true;
    }
    if (packet.find("buttonClicked|v6") != -1) {
        variantlist_t var{ "OnSetClothing" };
        //var[1] = 0.0f, 0.0f, 0.0f;
        var[2] = 0.0f, 0.0f, 366.0f;
        //var[3] = 1784.0f, 0.0f, 0.0f;
        var[4] = 0x8295c3ff;
        //var[5] = 0.0f, 0.0f, 0.0f;
        g_server->send(true, var, world.local.netid, -1);
        return true;
    }
    if (packet.find("buttonClicked|v7") != -1) {
        variantlist_t var{ "OnSetClothing" };
        //var[1] = 0.0f, 0.0f, 0.0f;
        var[2] = 0.0f, 0.0f, 4136.0f;
        //var[3] = 1784.0f, 0.0f, 0.0f;
        var[4] = 0x8295c3ff;
        //var[5] = 0.0f, 0.0f, 0.0f;
        g_server->send(true, var, world.local.netid, -1);
        return true;
    }
    if (packet.find("buttonClicked|v8") != -1) {
        variantlist_t var{ "OnSetClothing" };
        //var[1] = 0.0f, 0.0f, 0.0f;
        var[2] = 0.0f, 0.0f, 1464.0f;
        //var[3] = 1784.0f, 0.0f, 0.0f;
        var[4] = 0x8295c3ff;
        //var[5] = 0.0f, 0.0f, 0.0f;
        g_server->send(true, var, world.local.netid, -1);
        return true;
    }

    if (packet.find("buttonClicked|modsettings") != -1)
    {
        Dialog a;
        a.addLabelWithIcon("Mod Detect Settings", 5956, LABEL_BIG);
        a.addSpacer(SPACER_SMALL);
        //a.addCheckbox("modbansz", "`9Ban Everyone", banallmod);
        a.addCheckbox("exitsmod", "`9Auto Leave", exitmod);
        a.addCheckbox("unaccmods", "`9Auto Unaccess", unaccmod);
        a.endDialog("modset", "Okey", "Cancel");
        variantlist_t liste{ "OnDialogRequest" };
        liste[1] = a.finishDialog();
        g_server->send(true, liste);
    }
    if (packet.find("autotax|") != -1) {
        std::string aaa = packet.substr(packet.find("tax|") + 4, packet.size());
        std::string number = aaa.c_str();
        taxsystem = stoi(number);
    }
    if (packet.find("fmode|") != -1) {
        std::string aaa = packet.substr(packet.find("ode|") + 4, packet.size());
        std::string number = aaa.c_str();
        fastmode = stoi(number);
    }

    if (packet.find("taxamount|") != -1) {
        std::string aaa = packet.substr(packet.find("unt|") + 4, packet.size());
        std::string number = aaa.c_str();
        yuzde = stoi(number);
    }
    if (packet.find("autoacc|") != -1) {
        std::string aaa = packet.substr(packet.find("acc|") + 4, packet.size());
        std::string number = aaa.c_str();
        autoacc = stoi(number);
    }
    if (packet.find("realfake|") != -1) {
        std::string aaa = packet.substr(packet.find("ake|") + 4, packet.size());
        std::string number = aaa.c_str();
        realfake = stoi(number);
    }
    if (packet.find("exitsmod|") != -1) {
        std::string aaa = packet.substr(packet.find("mod|") + 4, packet.size());
        std::string number = aaa.c_str();
        exitmod = stoi(number);
    }
    if (packet.find("vendudu") != -1) {
        int vend_2 = std::stoi(packet.substr(packet.find("vend_2|") + 7, packet.length() - packet.find("vend_2|") - 1));
        amountvend = vend_2;
    }
    if (packet.find("unaccmods|") != -1) {
        std::string aaa = packet.substr(packet.find("ods|") + 4, packet.size());
        std::string number = aaa.c_str();
        unaccmod = stoi(number);
    }
    if (packet.find("moddetect|") != -1) {
        std::string aaa = packet.substr(packet.find("ect|") + 4, packet.size());
        std::string number = aaa.c_str();
        moddetect = stoi(number);
    }
    if (packet.find("fastdrop|") != -1) {
        std::string aaa = packet.substr(packet.find("rop|") + 4, packet.size());
        std::string number = aaa.c_str();
        fastdrop = stoi(number);
    }
    if (packet.find("wrenchmode|") != -1) {
        std::string aaa = packet.substr(packet.find("ode|") + 4, packet.size());
        std::string number = aaa.c_str();
        wrench = stoi(number);
    }
    if (packet.find("fasttrash|") != -1) {
        std::string aaa = packet.substr(packet.find("ash|") + 4, packet.size());
        std::string number = aaa.c_str();
        fasttrash = stoi(number);
    }
    if (packet.find("buttonClicked|iso11pul1") != -1) {
        mode = "`5Pull"; //bannj
        return true;
    }
    if (packet.find("buttonClicked|iso11pul2") != -1) {
        hostermode = !hostermode; //bannj
        return true;
    }
   
    if (packet.find("buttonClicked|bannj") != -1) {
        mode = "`4Ban";
        return true;
    }
    if (packet.find("buttonClicked|kicjlabas") != -1) {
        mode = "`4Kick";
        return true;
    }
    if (packet.find("wrenchpull|") != -1) {
        try {
            std::string aaa = packet.substr(packet.find("ull|") + 4, packet.size());
            std::string number = aaa.c_str();
            while (!number.empty() && isspace(number[number.size() - 1]))
                number.erase(number.end() - (76 - 0x4B));
            wrench = stoi(number);
        }
        catch (exception a)
        {
            gt::send_log("`4Critical Error: `2override detected");

        }
        return true;
    }
    if (wrench == true) {
        if (hostermode == true) {
            if (packet.find("action|wrench") != -1) {
                if (GetAsyncKeyState(0x01)) {
                    g_server->send(false, packet);

                    std::string str = packet.substr(packet.find("netid|") + 6, packet.length() - packet.find("netid|") - 1);
                    std::string gta5 = str.substr(0, str.find("|"));
                    g_server->send(false, "action|dialog_return\ndialog_name|popup\nnetID|" + gta5 + "|\nnetID|" + gta5 + "|\nbuttonClicked|pull");
                }
                else  if (GetAsyncKeyState(0x02)) {
                    g_server->send(false, packet);

                    std::string str = packet.substr(packet.find("netid|") + 6, packet.length() - packet.find("netid|") - 1);
                    std::string gta5 = str.substr(0, str.find("|"));
                    g_server->send(false, "action|dialog_return\ndialog_name|popup\nnetID|" + gta5 + "|\nnetID|" + gta5 + "|\nbuttonClicked|kick");
                }
                std::string str = packet.substr(packet.find("netid|") + 6, packet.length() - packet.find("netid|") - 1);
                std::string gta5 = str.substr(0, str.find("|"));
                variantlist_t varlist{ "OnTextOverlay" };
                varlist[1] = "Successfuly " + mode + "`` netID: " + gta5;
                g_server->send(true, varlist);
                return true;
            }
        }
        else {
            if (packet.find("action|wrench") != -1) {
                g_server->send(false, packet);

                std::string str = packet.substr(packet.find("netid|") + 6, packet.length() - packet.find("netid|") - 1);
                std::string gta5 = str.substr(0, str.find("|"));
                if (mode == "`5Pull") {
                    g_server->send(false, "action|dialog_return\ndialog_name|popup\nnetID|" + gta5 + "|\nnetID|" + gta5 + "|\nbuttonClicked|pull");
                }
                if (mode == "`4Kick") {
                    g_server->send(false, "action|dialog_return\ndialog_name|popup\nnetID|" + gta5 + "|\nnetID|" + gta5 + "|\nbuttonClicked|kick");
                }
                if (mode == "`4Ban") {
                    g_server->send(false, "action|dialog_return\ndialog_name|popup\nnetID|" + gta5 + "|\nnetID|" + gta5 + "|\nbuttonClicked|worldban");
                }
                variantlist_t varlist{ "OnTextOverlay" };
                varlist[1] = "Successfuly " + mode + "`` netID: " + gta5;
                g_server->send(true, varlist);
                return true;
            }
        }
    }
    if (var.get(0).m_key == "action" && var.get(0).m_value == "input") {
        if (var.size() < 2)
            return false;
        if (var.get(1).m_values.size() < 2)
            return false;

        if (!world.connected)
            return false;

        auto chat = var.get(1).m_values[1];
        if (find_command(chat, "name ")) { //ghetto solution, but too lazy to make a framework for commands.
            std::string name = "``" + chat.substr(6) + "``";
            variantlist_t va{ "OnNameChanged" };
            va[1] = name;
            g_server->send(true, va, world.local.netid, -1);
            gt::send_log("name set to: " + name);
            return true;
        }
        else if (find_command(chat, "fastvend")) {
            if (fastvend == false) {
                fastvend = true;
                gt::send_log("`9Fast Vend is `2ON");
            }
            else {
                fastvend = false;
                gt::send_log("`9Fast Vend is `4OFF");
            }
            return true;
        }
        else if (find_command(chat, "country ")) {
            std::string cy = chat.substr(9);
            gt::flag = cy;
            gt::send_log("your country set to " + cy + ", (Relog to game to change it successfully!)");
            return true;
        }
        else if (find_command(chat, "surg")) {
            asurg = !asurg;
            if (asurg)
                gt::send_log("`9Auto Surg is now enabled.");
            else
                gt::send_log("`9Auto Surg is now disabled.");
            return true;
        }
        /*else if (find_command(chat, "game1 ")) { //dropwl
            std::string cdropcount = chat.substr(7);
            int bruh = stoi(cdropcount) % 5;
            int bruh2 = stoi(cdropcount);
            if (bruh == 1) {
                bruh2 = bruh2 - 1;
            }
            if (bruh == 2) {
                bruh2 = bruh2 - 2;
            }
            if (bruh == 3) {
                bruh2 = bruh2 - 3;
            }
            if (bruh == 4) {
                bruh2 = bruh2 - 4;
            }
            if (bruh == 5) {
                bruh2 = bruh2 + 5;
            }
            if (bruh == 6) {
                bruh2 = bruh2 + 4;
            }
            if (bruh == 7) {
                bruh2 = bruh2 + 3;
            }
            if (bruh == 8) {
                bruh2 = bruh2 + 2;
            }
            if (bruh == 9) {
                bruh2 = bruh2 + 1;
            }
            int bruh3 = bruh2 * yuzde / 100;
            int bruh4 = stoi(cdropcount) - bruh3;
            variantlist_t var{ "OnTextOverlay" };
            var[1] = "`95% tax of`2 " + cdropcount + " `9is:`c " + to_string(bruh4);
            g_server->send(true, var);
            return true;
        }*/
        else if (find_command(chat, "flow") || find_command(chat, "Flow") || find_command(chat, "FLOW")) {
            g_server->send(false, "action|join_request\nname|flow298\ninvitedWorld|0", 3);
            gt::send_log("`9Warping to `#Latest Flow Link!");
            return true;
            //g_server->send(false, "action|quit_to_exit", 3);
        }
        else if (find_command(chat, "back") || find_command(chat, "Back") || find_command(chat, "BACK")) {
            string ruzgar = g_server->m_world.name;
            g_server->send(false, "action|join_request\nname|" + old_world + "\ninvitedWorld|0", 3);
            gt::send_log("`9Warps to `#previously `9entered world!");
            return true;
            //g_server->send(false, "action|quit_to_exit", 3);
        }
        else if (find_command(chat, "North") || find_command(chat, "NORTH") || find_command(chat, "north")) {
            g_server->send(false, "action|join_request\nname|north195\ninvitedWorld|0", 3);
            gt::send_log("`9Warping to `#Latest North Link!");
            return true;
            //g_server->send(false, "action|quit_to_exit", 3);
        }
        else if (find_command(chat, "pullname")) {
            pullbynames = !pullbynames;
            if (pullbynames)
                gt::send_log("`9Auto Pull Specific Player is now enabled.");
            else
                gt::send_log("`9Auto Pull Specific Player is now disabled.");
            return true;
        }

        else if (find_command(chat, "autopull")) {
            pulas = !pulas;
            if (pulas)
                gt::send_log("`9Auto Pull is now enabled.");
            else
                gt::send_log("`9Auto Pull is now disabled.");
            return true;
        }
        /*else if (find_command(chat, "blink")) {
            blink = !blink;
            if (!startedBlink) {
                thread(startBlink).detach();
            }
            if (blink) {
                gt::send_log("`9Blink Skin is `2ON");
            }
            else {
                gt::send_log("`9Blink Skin is `4OFF");
            }
            return true;
        }*/
        else if (find_command(chat, "autoban")) {
            banas = !banas;
            if (banas)
                gt::send_log("`9Auto Ban is now enabled.");
            else
                gt::send_log("`9Auto Ban is now disabled.");
            return true;
        }
        else if (find_command(chat, "autoacc")) {
            autoacc = !autoacc;
            if (autoacc)
                gt::send_log("`9Auto Acc is now enabled.");
            else
                gt::send_log("`9Auto Acc is now disabled.");
            return true;
        }
        /*else if (find_command(chat, "pf")) {
            pathfinder = !pathfinder;
            if (pathfinder)
                gt::send_log("`9PathFinder is now enabled.");
            else
                gt::send_log("`9PathFinder is now disabled.");
            return true;
        }*/
        else if (find_command(chat, "fakeban")) {
            variantlist_t joakimonhomo{ "OnAddNotification" };
            joakimonhomo[1] = "interface/atomic_button.rttex";
            joakimonhomo[2] = "Warning from `4System``: You've been `4BANNED`` from `wGrowtopia`` for 730 days";
            joakimonhomo[3] = "audio/hub_open.wav";
            gt::send_log("`oReality flickers as you begin to wake up. (`$Ban`o mod added, `$730`o days left)");
            g_server->send(true, joakimonhomo);
            return true;
        }
        else if (find_command(chat, "fd")) {
            fastdrop = !fastdrop;
            if (fastdrop)
                gt::send_log("`9Fast Drop is `2ON");
            else
                gt::send_log("`9Fast Drop is `4OFF");
            return true;
        }
        else if (find_command(chat, "ft")) {
            fasttrash = !fasttrash;
            if (fasttrash)
                gt::send_log("`9Fast Trash/Recycle is now `2ON");
            else
                gt::send_log("`9Fast Trash/Recycle is now `4OFF");
            return true;
        }
        else if (find_command(chat, "autobgl")) {
            autobgl = !autobgl;
            if (autobgl)
                gt::send_log("`9Auto Change BGL is now `2ON");
            else
                gt::send_log("`9Auto Change BGL is now `4OFF");
            return true;
        }
        else if (find_command(chat, "modexit")) {
            exitmod = !exitmod;
            if (exitmod)
                gt::send_log("`9Auto Exit World When `#@Mod `9Joins is `2ON");
            else
                gt::send_log("`9Auto Exit World When `#@Mod `9Joins is `4OFF");
            return true;
        }
        else if (find_command(chat, "modunacc")) {
            unaccmod = !unaccmod;
            if (unaccmod)
                gt::send_log("`9Auto Unaccess When `#@Mod `9Joins is `2ON");
            else
                gt::send_log("`9Auto Unaccess When `#@Mod `9Joins is `4OFF");
            return true;
        }
        else if (find_command(chat, "gp")) {
            gaspull = !gaspull;
            if (gaspull)
                gt::send_log("`9Gas Pull is `2ON");
            else
                gt::send_log("`9Gas Pull is `4OFF");
            return true;
        }
        else if (find_command(chat, "realspin")) {
            realfake = !realfake;
            if (realfake)
                gt::send_log("`9Show `0[`2REAL`0]`w, `0[`4FAKE`0]`9 Spin is `2ON");
            else
                gt::send_log("`9Show `0[`2REAL`0]`w, `0[`4FAKE`0]`9 Spin is `4OFF");
            return true;
        }
        else if (find_command(chat, "detector")) {
            moddetect = !moddetect;
            if (moddetect)
                gt::send_log("`9Mod Detector is `2ON");
            else
                gt::send_log("`9Mod Detector is `4OFF");
            return true;
        }
        else if (find_command(chat, "wm")) {
            wrench = !wrench;
            if (wrench)
                gt::send_log("`9Wrench Mode is `2ON");
            else
                gt::send_log("`9Wrench mode is `4OFF");
            return true;
        }
        if (find_command(chat, "seth") || find_command(chat, "Seth") || find_command(chat, "SETH")) {
            auto& visuals = g_server->m_world.local;
            variantlist_t va{ "OnNameChanged" };
            va[1] = "`8@Seth";
            g_server->send(true, va, world.local.netid, -1);
            gt::send_log("name set to: `8@Seth");
            return true;
        }
        if (find_command(chat, "caitriona") || find_command(chat, "Caitriona") || find_command(chat, "CAITRIONA")) {
            auto& visuals = g_server->m_world.local;
            variantlist_t va{ "OnNameChanged" };
            va[1] = "`#@Caitriona";
            g_server->send(true, va, world.local.netid, -1);
            gt::send_log("name set to: `#@Caitriona");
            return true;
        }
        else if (find_command(chat, "npc")) {
            std::string name = "``" + chat.substr(4) + "``";  // Adjusted substring extraction
            std::string packet_1;
            std::string packet_2;
            std::string packet_3;
            std::string packet_4;
            packet_1 =
                "spawn|avatar"
                "\nnetID|9999"
                "\nuserID|99999"
                "\ncolrect|0|0|20|30";
            packet_2 =
                "\nposXY|" + std::to_string(g_server->local_player.pos.m_x) + "|" + std::to_string(g_server->local_player.pos.m_y);
            packet_3 =
                "\nname|" + name +
                "\ncountry|" + g_server->local_player.country;
            packet_4 =
                "\ninvis|0"
                "\nmstate|0"
                "\nsmstate|0"
                "\nonlineID|"
                "\ntype|";
            variantlist_t varlst2{ "OnSpawn" };
            varlst2[1] = packet_1 + packet_2 + packet_3 + packet_4;
            g_server->send(true, varlst2);
            variantlist_t varlst{ "OnParticleEffect" };
            varlst[1] = 90;
            varlst[2] = vector2_t{ static_cast<float>(g_server->local_player.pos.m_x) + 10, static_cast<float>(g_server->local_player.pos.m_y) + 15 };
            varlst[3] = 0;
            varlst[4] = 0;
            g_server->send(true, varlst);
            return true;
        }
        else if (find_command(chat, "rtitle")) {
            variantlist_t va{ "OnNameChanged" };
            va[1] = "``" + g_server->local_player.name;
            g_server->send(true, va, g_server->local_player.netid, -1);
            return true;
        }
        if (find_command(chat, "Doctor") || find_command(chat, "doctor") || find_command(chat, "DOCTOR")) {
            auto& visuals = g_server->m_world.local;
            variantlist_t va{ "OnNameChanged" };
            va[1] = "`4Dr." "`4" + visuals.name + "`4";
            g_server->send(true, va, world.local.netid, -1);
            gt::send_log("title set to: " + visuals.name + " Dr.");
            return true;
        }
        if (find_command(chat, "legend") || find_command(chat, "Legend") || find_command(chat, "LEGEND")) {
            auto& visuals = g_server->m_world.local;
            variantlist_t va{ "OnNameChanged" };
            va[1] = "``" + visuals.name + " of Legend``";
            g_server->send(true, va, world.local.netid, -1);
            gt::send_log("name set to: " + visuals.name + " of Legend");
            return true;
        }
        else if (find_command(chat, "mentor") || find_command(chat, "Mentor") || find_command(chat, "MENTOR")) {
            std::string mn = "|showGuild|master";

            variantlist_t mentor{ "OnCountryState" };
            mentor[1] = mn.c_str();
            g_server->send(true, mentor, g_server->m_world.local.netid, -1);
            return true;
        }
        else if (find_command(chat, "res") || find_command(chat, "Res") || find_command(chat, "RES")) {
            if (packet.find("action|res") != -1) {
                g_server->send(false, "action|input\n|text|/respawn");
                return true;
            }
            return true;
        }
        else if (find_command(chat, "g4g") || find_command(chat, "G4G") || find_command(chat, "G4g")) {
            std::string packet125level = "us|showGuild|donor";

            variantlist_t packet123{ "OnCountryState" };
            packet123[1] = packet125level.c_str();
            g_server->send(true, packet123, g_server->m_world.local.netid, -1);
            return true;
            //visuals end
        }
        if (find_command(chat, "name ") || find_command(chat, "Name ") || find_command(chat, "NAME"))
        {
            std::string name = "``" + chat.substr(6) + "``";
            variantlist_t va{ "OnNameChanged" };
            va[1] = name;
            g_server->send(true, va, world.local.netid, -1);
            gt::send_log("name set to: " + name);
            return true;
        }
        else if (find_command(chat, "maxlevel") || find_command(chat, "MaxLevel") || find_command(chat, "Maxlevel") || find_command(chat, "MAXLEVEL")) {
            std::string packet125level = "us|showGuild|maxLevel";

            variantlist_t packet123{ "OnCountryState" };
            packet123[1] = packet125level.c_str();
            g_server->send(true, packet123, g_server->m_world.local.netid, -1);
            return true;
        }
        else if (find_command(chat, "autotax")) {
            taxsystem = !taxsystem;
            if (taxsystem)
                gt::send_log("`9Auto Tax is `2ON");
            else
                gt::send_log("`9Auto Tax is `4OFF");
            return true;
        }
        else if (find_command(chat, "fmode")) {
            fastmode = !fastmode;
            if (fastmode)
                gt::send_log("`9FastMode is `2ON");
            else
                gt::send_log("`9FastMode is `4OFF");
            return true;
        }
        else if (find_command(chat, "warp ")) {
            std::string name = chat.substr(6);
            gt::send_log("`9Warping to " + name);
            g_server->send(false, "action|join_request\nname|" + name, 3);
            return true;
        }
        else if (find_command(chat, "banall")) {
            std::string username = "all";
            for (auto& player : g_server->m_world.players) {
                auto name_2 = player.name.substr(2); //remove color
                std::transform(name_2.begin(), name_2.end(), name_2.begin(), ::tolower);
                if (name_2.find(username)) {
                    auto& bruh = g_server->m_world.local;
                    {
                        string plyr = player.name.substr(2).substr(0, player.name.length() - 4);
                        if (plyr != bruh.name.substr(2).substr(0, player.name.length() - 4))
                        {
                            g_server->send(false, "action|input\n|text|/ban " + plyr);
                        }
                    }
                    // You Can |kick |trade |worldban 

                }
            }
            return true;
        }
        else if (find_command(chat, "killall")) {
            std::string username = "all";
            for (auto& player : g_server->m_world.players) {
                auto name_2 = player.name.substr(2); //remove color
                std::transform(name_2.begin(), name_2.end(), name_2.begin(), ::tolower);
                if (name_2.find(username)) {
                    auto& bruh = g_server->m_world.local;
                    {
                        string plyr = player.name.substr(2).substr(0, player.name.length() - 4);
                        if (plyr != bruh.name.substr(2).substr(0, player.name.length() - 4))
                        {
                            g_server->send(false, "action|input\n|text|/kick " + plyr);
                        }
                    }
                    // You Can |kick |trade |worldban 

                }
            }
            return true;
        }
        /*else if (find_command(chat, "visual")) {
            Dialog vc;
            vc.addLabelWithIcon("Visual Clothes List", 2592, LABEL_BIG);
            vc.addSpacer(SPACER_SMALL);
            vc.addLabelWithIconButton("Legendary Wings", 1784, "v1");
            vc.addLabelWithIconButton("Legendary Katana", 2592, "v2");
            vc.addLabelWithIconButton("Legendbot-009", 1780, "v3");
            vc.addLabelWithIconButton("Dragon of Legend", 1782, "v4");
            vc.addLabelWithIconButton("Golden Angel Wings", 1460, "v5");
            vc.addLabelWithIconButton("Heartbow", 366, "v6");
            vc.addLabelWithIconButton("Heatbow", 4136, "v7");
            vc.addLabelWithIconButton("Golden Heartbow", 1464, "v8");
            vc.addQuickExit();
            vc.endDialog("vclothes", "OK", "Cancel");
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = vc.finishDialog();
            g_server->send(true, liste);
            return true;
        }*/
        /*else if (find_command(chat, "wr")) {
            variantlist_t var{ "OnSetClothing" };
            var[1] = 0.0f, 0.0f, 0.0f;
            var[2] = 0.0f, 0.0f, 0.0f;
            var[3] = 1784.0f, 0.0f, 0.0f;
            var[4] = 0x8295c3ff;
            var[5] = 0.0f, 0.0f, 0.0f;
            g_server->send(true, var, world.local.netid, -1);
            gt::send_log("Weared.");
            return true;
        }*/
        else if (find_command(chat, "daw")) {
            thread(daww).detach();
            gt::send_log("`9Dropping all WLS & DLS & BGLS.");
            return true;
        }

        else if (find_command(chat, "pullall")) {
            std::string username = "all";
            for (auto& player : g_server->m_world.players) {
                auto name_2 = player.name.substr(2); //remove color
                std::transform(name_2.begin(), name_2.end(), name_2.begin(), ::tolower);
                if (name_2.find(username)) {
                    auto& bruh = g_server->m_world.local;
                    {
                        string plyr = player.name.substr(2).substr(0, player.name.length() - 4);
                        if (plyr != bruh.name.substr(2).substr(0, player.name.length() - 4))
                        {
                            g_server->send(false, "action|input\n|text|/pull " + plyr);
                        }
                    }
                    // You Can |kick |trade |worldban 

                }
            }
            return true;
        }
        else if (find_command(chat, "spam") || find_command(chat, "SPAM") || find_command(chat, "Spam")) {
            if (enabled_color == true) {
                swxs = "1";
            }
            else {
                swxs = "0";
            }
            std::string msg;
            msg =
                "add_label_with_icon|big|Auto Spam Page|left|242|"
                "\nadd_textbox|`9Leave the text uncolored, it will automaticcly color itself|left|2480|"
                "\nadd_textbox|`9if colored Text is enabled|left|2480|"
                "\nadd_checkbox|c_text|`2Enable `ccolored text|" +
                swxs +
                "|"
                //"\nadd_text_input |spam_msg|`9Spam text: | " + gt:: + " |30"
                "\nadd_text_input|spam_msg|`9Spam text: ||50|"
                //add_text_input|" + name + "|" + text + "|" + cont + "|" + to_string(size) + "|
                "\nadd_text_input|delay_msg|`9Delay`2(ms): |" + to_string(delay) + "|4|"
                "\nadd_textbox|`91000`2ms`9 = 1 Second|left|2480|"
                "\nend_dialog|spam_text|Cancel|Set|"; //"\nend_dialog|colored_text|Cancel|Set|";
            variantlist_t send{ "OnDialogRequest" };
            send[1] = msg;
            g_server->send(true, send);
            return true;
            }
        else if (find_command(chat, "/")) {
            son = !son;
            std::thread([&]() {
                const string colored_text_array[10] = { "`2", "`3", "`4", "`#", "`9", "`8", "`c", "`6", "`^" , "`b" };
                while (son) {
                    int baba = (rand() % 9) + 1;
                    string send_ = colored_text_array[baba];
                    if (enabled_color == true) {
                        g_server->send(false, "action|input\n|text|" + send_ + aspam);
                    }
                    else {
                        g_server->send(false, "action|input\n|text|" + aspam);
                    }
                    std::this_thread::sleep_for(std::chrono::milliseconds(delay));

                }
                }).detach();
                return true;
                }
        else if (find_command(chat, "autocollect") || find_command(chat, "ac")) {
            Dialog a;
            a.addLabelWithIcon("AutoCollect Settings", 6140, LABEL_BIG);
            a.addCheckbox("ac_enable", "`2Enable `9AutoCollect", do_auto_collect);
            a.addInputBox("ac_range", "`9Range", to_string(gt::ac_range), 2);
            a.addTextBox("`9Max range is `210");
            a.endDialog("ac_page", "Okey", "Cancel");
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = a.finishDialog();
            g_server->send(true, liste);

            return true;
        }
        else if (find_command(chat, "setspam ")) {
            string sp = chat.substr(9);
            spam_text = sp;
            gt::send_log("`5Spam Text Set To: " + sp);
            return true;
        }
        else if (find_command(chat, "settax ")) {
            string sp = chat.substr(8);
            to_string(yuzde) = sp;
            gt::send_log("`5Tax Set To: " + sp + "%");
            return true;
        }
        else if (find_command(chat, "modtest")) {
            detect();
            return true;
        }
       
        else if (find_command(chat, "wrench") || find_command(chat, "Wrench") || find_command(chat, "WRENCH")) {
            if (wrench == true) {
                lidb = "1";
            }
            else {
                lidb = "0";
            }
            std::string paket;
            paket =
                "\nadd_label_with_icon|big|`9Choose Wrench Mode|left|32|"
                "\nadd_textbox|`1Current Mode: " + mode + "|left|2480|"
                "\nadd_button|kicjlabas|`4Kick``|noflags|0|0|"
                "\nadd_button|bannj|`4Ban``|noflags|0|0|"
                "\nadd_button|iso11pul1|`5Pull``|noflags|0|0|"
                "\nadd_button|iso11pul2|`5Right Click Kick Mode, Left Click Pull Mode``|noflags|0|0|"
                "\nadd_checkbox|wrenchpull|`#Enable Wrench Mode|" +
                lidb +
                "|"
                "\nend_dialog|end|Cancel|Okay|";
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = paket;
            g_server->send(true, liste);
            return true;
        }

        else if (find_command(chat, "autolist")) {
            Dialog w;
            w.addLabelWithIcon("Auto Pull List", 32, LABEL_BIG);
            w.addTextBox("`c[1] Name: `5" + name1);
            w.addSpacer(SPACER_SMALL);
            w.addTextBox("`c[2] Name: `5" + name2);
            w.addSpacer(SPACER_SMALL);
            w.addTextBox("`c[3] Name: `5" + name3);
            w.addSpacer(SPACER_SMALL);
            w.addTextBox("`c[4] Name: `5" + name4);
            w.addSpacer(SPACER_SMALL);
            w.addTextBox("`c[5] Name: `5" + name5);
            w.addSpacer(SPACER_SMALL);
            w.endDialog("list", "Okey", "Cancel");
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = w.finishDialog();
            g_server->send(true, liste);
            return true;
        }
        else if (find_command(chat, "title")) {
            Dialog a;

        }
        else if (find_command(chat, "options")) {
            Dialog a;
            a.addLabelWithIcon("Options Page", 1796, LABEL_BIG);
            a.addSpacer(SPACER_SMALL);
            //a.addButton("pullby_name", "`2Auto `5Pull`0 Page");
            a.addCheckbox("autoacc", "`2Enable `9Auto Access", autoacc);
            a.addCheckbox("wrenchmode", "`2Enable `9Wrench " + mode, wrench);
            a.addCheckbox("fastdrop", "`2Enable `9Fast Drop", fastdrop);
            a.addCheckbox("realfake", "`9Show `0[`2REAL```0]```` `9When Spin", realfake);
            a.addCheckbox("moddetect", "`2Enable `#@Mod `9Detect", moddetect);
            a.addButton("modsettings", "`bMod Detect Settings");
            a.endDialog("options", "Okey", "Cancel");
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = a.finishDialog();
            g_server->send(true, liste);
            return true;
        }
        else if (find_command(chat, "discord") || find_command(chat, "Discord") || find_command(chat, "DISCORD")) {
            std::string paket;
            paket =
                "\nadd_label_with_icon|big|Visual Proxy Discord Server:|left|4802|"
                "\nadd_spacer|small"
                "\nadd_url_button||`8Join Visual Proxy Discord Server``|NOFLAGS|https://discord.gg/KsAfTk2JTu|Open link?|0|0|"
                "\nadd_spacer|small"
                "\nadd_quick_exit|"
                "\nend_dialog|end|Cancel|Okay|";
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = paket;
            g_server->send(true, liste);
            return true;
            }
        else if (find_command(chat, "cdrop ") || find_command(chat, "CDROP") || find_command(chat, "Cdrop") || find_command(chat, "CDrop")) {
            try {
                std::string cdropcount = chat.substr(7);
                int sayi = stoi(cdropcount);

                if (balance() < sayi) {
                    gt::send_log("`9Dont have `#balance`9. balance: " + to_string(balance()) + ".");
                    return true;
                }
                if (sayi < 100) {

                    if (item_count(242) < sayi) {
                        gameupdatepacket_t drop{ 0 };
                        drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                        drop.m_int_data = 1796;
                        g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                        std::this_thread::sleep_for(std::chrono::milliseconds(10));
                    }

                    dropwl = true;
                    g_server->send(false, "action|drop\n|itemID|242");
                    std::this_thread::sleep_for(std::chrono::milliseconds(300));
                    g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|242|\ncount|" + cdropcount); //242
                    gt::send_log("`9Dropping `c" + cdropcount + "`9 wls...");
                }

                else if (sayi > 10000) {


                    int sayi1 = (sayi / 10000);

                    int kalan = ((sayi / 100) - (sayi1 * 100));
                    int kalan2 = sayi - ((kalan * 100) + (sayi1 * 10000));
                    if (kalan > item_count(1796)) {
                        gameupdatepacket_t drop{ 0 };
                        drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                        drop.m_int_data = 7188;
                        g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                        std::this_thread::sleep_for(std::chrono::milliseconds(10));
                    }
                    else if (item_count(242) < kalan2) {
                        gameupdatepacket_t drop{ 0 };
                        drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                        drop.m_int_data = 1796;
                        g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                        std::this_thread::sleep_for(std::chrono::milliseconds(10));
                    }
                    dropbgl = true;
                    g_server->send(false, "action|drop\n|itemID|7188");
                    std::this_thread::sleep_for(std::chrono::milliseconds(300));

                    g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|7188|\ncount|" + std::to_string(sayi1)); //242

                    dropdl = true;
                    g_server->send(false, "action|drop\n|itemID|1796");
                    std::this_thread::sleep_for(std::chrono::milliseconds(300));

                    g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + std::to_string(kalan)); //242

                    dropwl = true;
                    g_server->send(false, "action|drop\n|itemID|242");
                    std::this_thread::sleep_for(std::chrono::milliseconds(300));

                    g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|242|\ncount|" + std::to_string(kalan2)); //242

                    gt::send_log("`9Dropping `c" + cdropcount + "`9 wls...");
                }
                else {
                    int sayi1 = (sayi / 100);
                    int kalan = (sayi % 100);

                    if (item_count(242) < kalan) {
                        gameupdatepacket_t drop{ 0 };
                        drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                        drop.m_int_data = 1796;
                        g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                        std::this_thread::sleep_for(std::chrono::milliseconds(10));

                    }
                    else if (item_count(1796) < sayi1) {
                        gameupdatepacket_t drop{ 0 };
                        drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                        drop.m_int_data = 242;
                        g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                        std::this_thread::sleep_for(std::chrono::milliseconds(10));

                    }
                    dropdl = true;
                    g_server->send(false, "action|drop\n|itemID|1796");
                    std::this_thread::sleep_for(std::chrono::milliseconds(300));

                    g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + std::to_string(sayi1)); //242

                    dropwl = true;
                    g_server->send(false, "action|drop\n|itemID|242");
                    std::this_thread::sleep_for(std::chrono::milliseconds(300));

                    g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|242|\ncount|" + std::to_string(kalan)); //242

                    gt::send_log("`9Dropping `c" + cdropcount + "`9 wls...");
                }
            }
            catch (std::exception) { gt::send_log("Critical Error : Invalid String Position"); }
            return true;
            }
             else if (find_command(chat, "relog") || find_command(chat, "Relog") || find_command(chat, "RELOG")) {
                 string ruzgar = g_server->m_world.name;
                 g_server->send(false, "action|quit_to_exit", 3);
                 std::this_thread::sleep_for(std::chrono::milliseconds(300));
                 g_server->send(false, "action|join_request\nname|" + ruzgar + "\ninvitedWorld|0", 3);
                 variantlist_t joakimonhomo{ "OnAddNotification" };
                 joakimonhomo[1] = "interface/atomic_button.rttex";
                 joakimonhomo[2] = "`3Relogged `8To `3World";
                 joakimonhomo[3] = "audio/hub_open.wav";
                 gt::send_log("`oRELOG HAS BEEN COMPELTED");
                 g_server->send(true, joakimonhomo);
                 return true;
                 //g_server->send(false, "action|quit_to_exit", 3);
        }
             else if (find_command(chat, "speed") || find_command(chat, "Speed") || find_command(chat, "SPEED")) {
                 Dialog a;
                 a.addLabelWithIcon("Speed Settings", 2324, LABEL_BIG);
                 a.addInputBox("speed_x", "`9Speed:", to_string(speed_x), 7);
                 a.addInputBox("speed_y", "`9Gravity:", to_string(speed_y), 7);
                 a.endDialog("speed_page", "Okey", "Cancel");
                 variantlist_t liste{ "OnDialogRequest" };
                 liste[1] = a.finishDialog();
                 g_server->send(true, liste);

                 return true;
        }
            else if (find_command(chat, "dd ") || find_command(chat, "DD ") || find_command(chat, "Dd ") || find_command(chat, "dD ")) {
                try {
                    if (item_count(1796) == 0) {
                        return true;

                    }
                    std::string cdropcount = chat.substr(4);


                    int dlcount = stoi(cdropcount);


                    if (dlcount > 200 && item_count(7188) >= (dlcount / 100)) {

                        if (item_count(1796) < (dlcount % 100)) {
                            gameupdatepacket_t drop{ 0 };
                            drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                            drop.m_int_data = 7188;
                            g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                            std::this_thread::sleep_for(std::chrono::milliseconds(10));
                        }
                        dropbgl = true;
                        g_server->send(false, "action|drop\n|itemID|7188");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));

                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|7188|\ncount|" + std::to_string((dlcount / 100))); //242
                        dropdl = true;
                        g_server->send(false, "action|drop\n|itemID|1796");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));
                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + std::to_string((dlcount % 100))); //1796

                        gt::send_log("`9Dropping `c" + cdropcount + "`9 Dl...");
                        return true;
                    }

                    if (item_count(1796) < dlcount && item_count(1796) <= 100) {
                        gameupdatepacket_t drop{ 0 };
                        drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                        drop.m_int_data = 7188;
                        g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                        std::this_thread::sleep_for(std::chrono::milliseconds(10));
                    }
                    else if (item_count(1796) < dlcount) {
                        dropbgl = true;
                        g_server->send(false, "action|drop\n|itemID|7188");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));

                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|7188|\ncount|" + std::to_string((dlcount / 100))); //242
                        dropdl = true;
                        g_server->send(false, "action|drop\n|itemID|1796");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));
                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + std::to_string((dlcount % 100))); //1796

                        gt::send_log("`9Dropping `c" + cdropcount + "`9 Dl...");
                        return true;

                    }
                    dropdl = true;
                    g_server->send(false, "action|drop\n|itemID|1796");
                    std::this_thread::sleep_for(std::chrono::milliseconds(300));
                    g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + cdropcount); //1796
                    gt::send_log("`9Dropping `c" + cdropcount + "`9 Dl...");
                }
                catch (std::exception) { gt::send_log("Critical Error : Invalid String Position"); }
                return true;
        }
        else if (find_command(chat, "cd ") || find_command(chat, "CD") || find_command(chat, "Cd")) {
                try {
                    std::string cdropcount = chat.substr(4);
                    int sayi = stoi(cdropcount);


                    if (sayi < 100) {

                        if (item_count(242) < sayi) {
                            gameupdatepacket_t drop{ 0 };
                            drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                            drop.m_int_data = 1796;
                            g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                            std::this_thread::sleep_for(std::chrono::milliseconds(10));
                        }

                        dropwl = true;
                        g_server->send(false, "action|drop\n|itemID|242");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));
                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|242|\ncount|" + cdropcount); //242
                        gt::send_log("`9Dropping `c" + cdropcount + "`9 wls...");
                    }

                    else if (sayi > 10000) {


                        int sayi1 = (sayi / 10000);

                        int kalan = ((sayi / 100) - (sayi1 * 100));
                        int kalan2 = sayi - ((kalan * 100) + (sayi1 * 10000));
                        if (kalan > item_count(1796)) {
                            gameupdatepacket_t drop{ 0 };
                            drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                            drop.m_int_data = 7188;
                            g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                            std::this_thread::sleep_for(std::chrono::milliseconds(10));
                        }
                        else if (item_count(242) < kalan2) {
                            gameupdatepacket_t drop{ 0 };
                            drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                            drop.m_int_data = 1796;
                            g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                            std::this_thread::sleep_for(std::chrono::milliseconds(10));
                        }
                        dropbgl = true;
                        g_server->send(false, "action|drop\n|itemID|7188");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));

                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|7188|\ncount|" + std::to_string(sayi1)); //242

                        dropdl = true;
                        g_server->send(false, "action|drop\n|itemID|1796");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));

                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + std::to_string(kalan)); //242

                        dropwl = true;
                        g_server->send(false, "action|drop\n|itemID|242");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));

                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|242|\ncount|" + std::to_string(kalan2)); //242

                        gt::send_log("`9Dropping `c" + cdropcount + "`9 wls...");
                    }
                    else {
                        int sayi1 = (sayi / 100);
                        int kalan = (sayi % 100);

                        if (item_count(242) < kalan) {
                            gameupdatepacket_t drop{ 0 };
                            drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                            drop.m_int_data = 1796;
                            g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                            std::this_thread::sleep_for(std::chrono::milliseconds(10));

                        }
                        else if (item_count(1796) < sayi1) {
                            gameupdatepacket_t drop{ 0 };
                            drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                            drop.m_int_data = 242;
                            g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                            std::this_thread::sleep_for(std::chrono::milliseconds(10));

                        }
                        dropdl = true;
                        g_server->send(false, "action|drop\n|itemID|1796");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));

                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + std::to_string(sayi1)); //242

                        dropwl = true;
                        g_server->send(false, "action|drop\n|itemID|242");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));

                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|242|\ncount|" + std::to_string(kalan)); //242

                        gt::send_log("`9Dropping `c" + cdropcount + "`9 wls...");
                    }
                }
                catch (std::exception) { gt::send_log("Critical Error : Invalid String Position"); }
                return true;
                }
        else if (find_command(chat, "ddrop ") || find_command(chat, "DDROP") || find_command(chat, "Ddrop") || find_command(chat, "DDrop")) {
                    try {
                        if (item_count(1796) == 0) {
                            return true;

                        }
                        std::string cdropcount = chat.substr(7);
                        if (balance() < (stoi(cdropcount) * 100)) {
                            gt::send_log("`9Dont have enough `#balance`9.");
                            return true;

                        }

                        int dlcount = stoi(cdropcount);


                        if (dlcount > 200 && item_count(7188) >= (dlcount / 100)) {

                            if (item_count(1796) < (dlcount % 100)) {
                                gameupdatepacket_t drop{ 0 };
                                drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                                drop.m_int_data = 7188;
                                g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                                std::this_thread::sleep_for(std::chrono::milliseconds(10));
                            }
                            dropbgl = true;
                            g_server->send(false, "action|drop\n|itemID|7188");
                            std::this_thread::sleep_for(std::chrono::milliseconds(300));

                            g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|7188|\ncount|" + std::to_string((dlcount / 100))); //242
                            dropdl = true;
                            g_server->send(false, "action|drop\n|itemID|1796");
                            std::this_thread::sleep_for(std::chrono::milliseconds(300));
                            g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + std::to_string((dlcount % 100))); //1796

                            gt::send_log("`9Dropping `c" + cdropcount + "`9 Dl...");
                            return true;
                        }

                        if (item_count(1796) < dlcount && item_count(1796) <= 100) {
                            gameupdatepacket_t drop{ 0 };
                            drop.m_type = PACKET_ITEM_ACTIVATE_REQUEST;
                            drop.m_int_data = 7188;
                            g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&drop, sizeof(gameupdatepacket_t));
                            std::this_thread::sleep_for(std::chrono::milliseconds(10));
                        }
                        else if (item_count(1796) < dlcount) {
                            dropbgl = true;
                            g_server->send(false, "action|drop\n|itemID|7188");
                            std::this_thread::sleep_for(std::chrono::milliseconds(300));

                            g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|7188|\ncount|" + std::to_string((dlcount / 100))); //242
                            dropdl = true;
                            g_server->send(false, "action|drop\n|itemID|1796");
                            std::this_thread::sleep_for(std::chrono::milliseconds(300));
                            g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + std::to_string((dlcount % 100))); //1796

                            gt::send_log("`9Dropping `c" + cdropcount + "`9 Dl...");
                            return true;

                        }
                        dropdl = true;
                        g_server->send(false, "action|drop\n|itemID|1796");
                        std::this_thread::sleep_for(std::chrono::milliseconds(300));
                        g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + cdropcount); //1796
                        gt::send_log("`9Dropping `c" + cdropcount + "`9 Dl...");
                    }
                    catch (std::exception) { gt::send_log("Critical Error : Invalid String Position"); }
                    return true;
                    }
        /*else if (find_command(chat, "wd ")) {
            std::string cnt = chat.substr(3);
            dropwl = true;
            g_server->send(false, "action|drop\n|itemID|242");
            //Sleep(50);
            g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|242|\ncount|" + cnt); //242
            gt::send_log("`9Dropping`c" + cnt + "`9 wls!");
            return true;
        }*/
        else if (find_command(chat, "dd ") || find_command(chat, "ddrop ")) {
            // retardation
            string cdropcount = chat.substr(3);
            if (packet.find("ddrop ")) {
                int cdropcount = packet.find("ddrop " + 6);
            }
            else {
                int cdropcount = packet.find("dd " + 3);
            }
            //int dl = stoi(cdropcount) % 100;
            //int bgl = stoi(cdropcount) / 100;
            // JOKKE SAA KORJAA MYÖHEMMI
            dropwl = true;
            DropItem(1796, stoi(cdropcount));
            gt::send_log("`9Dropping `c" + cdropcount + " `9Dls.");
            return true;
        }
        else if (find_command(chat, "setpull1 ")) {
            std::string pull1 = chat.substr(10);
            name1 = pull1;
            gt::send_log("`c[1] `9Auto Pull Name set to: " + pull1);
            return true;
        }
        else if (find_command(chat, "setpull2 ")) {
            std::string pull1 = chat.substr(10);
            name2 = pull1;
            gt::send_log("`c[2] `9Auto Pull Name set to: " + pull1);
            return true;
        }
        else if (find_command(chat, "setpull3 ")) {
            std::string pull1 = chat.substr(10);
            name3 = pull1;
            gt::send_log("`c[3] `9Auto Pull Name set to: " + pull1);
            return true;
        }
        else if (find_command(chat, "setpull4 ")) {
            std::string pull1 = chat.substr(10);
            name4 = pull1;
            gt::send_log("`c[4] `9Auto Pull Name set to: " + pull1);
            return true;
        }
        else if (find_command(chat, "setpull5 ")) {
            std::string pull1 = chat.substr(10);
            name5 = pull1;
            gt::send_log("`c[5] `9Auto Pull Name set to: " + pull1);
            return true;
        }
        /*else if (find_command(chat, "bd ")) {
            std::string cnt = chat.substr(3);
            dropwl = true;
            g_server->send(false, "action|drop\n|itemID|1796");
            //Sleep(50);
            g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + cnt); //242
            gt::send_log("`9Dropping`c" + cnt + "`9 bgls!");
            return true;
        }*/
        else if (find_command(chat, "dropall1")) {
            for (server::Item& item : server::inventory) {
                if (item.count = 1) {
                    if (item.id != 32 && item.id != 18)
                        dropwl = true;
                    DropItem(item.id, item.count);
                    gt::send_log("`9Dropping itemID: " + to_string(item.id) + ", Count: " + to_string(item.count));
                    fastdrop = false;
                }
            }
            return true;
        }
        else if (find_command(chat, "taxinfo")) {
            Dialog t;
            t.addLabelWithIcon("Auto Tax Info", 1796, LABEL_BIG);
            if (taxsystem == true) {
                t.addTextBox("Auto Tax is `2ON.");
            }
            else {
                t.addTextBox("Auto Tax is `4OFF.");
            }
            if (fastmode == true) {
                t.addTextBox("Fast Mode is `2ON.");
            }
            else {
                t.addTextBox("Fast Mode is `4OFF.");
            }
            t.addTextBox("Tax Amount is " + to_string(yuzde) + "%");
            t.endDialog("end", "OK", "Cancel");
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = t.finishDialog();
            g_server->send(true, liste);
            return true;
        }
        /*else if (find_command(chat, "casino")) {
            Dialog casino;
            casino.addLabelWithIcon("Auto Tax System", 758, LABEL_BIG);
            casino.addSpacer(SPACER_SMALL);
            casino.addCheckbox("autotax", "Enable Auto Tax", taxsystem);
            casino.addCheckbox("fmode", "Enable FastMode", fastmode);
            casino.addInputBox("taxamount", "Tax Amount: %", std::to_string(yuzde), 2);
            casino.addQuickExit();
            casino.endDialog("end", "OK", "Cancel");
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = casino.finishDialog();
            g_server->send(true, liste);
            return true;
        }*/
        else if (find_command(chat, "find ")) {
            std::string namec = chat.substr(6);
            if (namec.length() < 3) {
                gt::send_log("`9Enter atleast 3 letters!");
                return true;
            }
            auto& items = g_server->m_world.itemDataContainer.item_map;
            Dialog a;
            a.addLabelWithIcon("`1>> Results For `9" + namec + "`1 <<", 8, LABEL_BIG);
            a.addSpacer(SPACER_SMALL);
            std::transform(namec.begin(), namec.end(), namec.begin(), [](unsigned char c) { return std::tolower(c); });
            for (auto& item : items) {
                std::transform(item.second.name.begin(), item.second.name.end(), item.second.name.begin(), [](unsigned char c) { return std::tolower(c); });
                if (item.second.name.find(namec) != -1) {
                    a.addLabelWithIconButton(item.second.name + " - `9itemID: `c" + to_string(item.second.itemID), item.second.itemID, "getItem-" + to_string(item.second.itemID) + "-");
                }
            }
            a.endDialog("end", "Okey", "Cancel");
            variantlist_t va{ "OnDialogRequest" };
            va[1] = a.finishDialog();
            g_server->send(true, va);
            return true;
        }
        else if (find_command(chat, "dropall")) {
            for (server::Item& item : server::inventory) {
                if (item.count > 0) {
                    if (item.id != 32 && item.id != 18)
                        fastdrop = true;
                    DropItem(item.id, item.count);
                    gt::send_log("`9Dropping itemID: " + to_string(item.id) + ", Count: " + to_string(item.count));
                    fastdrop = false;
                }
            }
            return true;
        }
        else if (find_command(chat, "save")) {
            std::ifstream vr;
            if (!vr) {
                std::ofstream vw;
                vw.open("gaspull.txt");
                vw << gaspull;
                vw.close();
            }
            vr >> gaspull;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("gaspull.txt");
                vw << gaspull;
                vw.close();
            }
            vr >> gaspull;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("cntr.txt");
                vw << gt::flag;
                vw.close();
            }
            vr >> gt::flag;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("fasttrash.txt");
                vw << fasttrash;
                vw.close();
            }
            vr >> fasttrash;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("autoacc.txt");
                vw << autoacc;
                vw.close();
            }
            vr >> autoacc;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("detect.txt");
                vw << moddetect;
                vw.close();
            }
            vr >> moddetect;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("leavemod.txt");
                vw << exitmod;
                vw.close();
            }
            vr >> exitmod;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("wp.txt");
                vw << mode;
                vw.close();
            }
            vr >> mode;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("name1.txt");
                vw << name1;
                vw.close();
            }
            vr >> name1;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("name2.txt");
                vw << name2;
                vw.close();
            }
            vr >> name2;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("name3.txt");
                vw << name3;
                vw.close();
            }
            vr >> name3;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("name4.txt");
                vw << name4;
                vw.close();
            }
            vr >> name4;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("name5.txt");
                vw << name5;
                vw.close();
            }
            vr >> name5;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("wmode.txt");
                vw << wrench;
                vw.close();
            }
            vr >> wrench;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("fdrop.txt");
                vw << fastdrop;
                vw.close();
            }
            vr >> fastdrop;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("unaccmod.txt");
                vw << unaccmod;
                vw.close();
            }
            vr >> unaccmod;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("realfake.txt");
                vw << realfake;
                vw.close();
            }
            vr >> realfake;
            vr.close();
            if (!vr) {
                std::ofstream vw;
                vw.open("spamtxt.txt");
                vw << spam_text;
                vw.close();
            }
            vr >> spam_text;
            vr.close();
            gt::send_log("`9Successfully saved all settings/commands");
            return true;
        }
        else if (find_command(chat, "logs")) {
            Dialog a;
            a.addLabelWithIcon("Proxy Logs", 2978, LABEL_BIG);
            std::ifstream vr0;
            vr0.open("Collecteditems.txt");
            vr0 >> items;
            vr0.close();
            a.addTextBox(myname + " Collected ");
            a.endDialog("logs", "Done", "Cancel");
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = a.finishDialog();
            g_server->send(true, liste);
            return true;
        }
        else if (find_command(chat, "vend")) {
            Dialog a;
            a.addLabelWithIcon("Fast Vend", 2978, LABEL_BIG);
            a.addSpacer(SPACER_SMALL);
            a.addTextBox("`9Do /fastvend to Enable Fast Vend");
            a.addTextBox("`9How to avoid `4SHADOWBAN`w:");
            a.addTextBox("`9Wait for 3 Seconds when you have bought the item");
            a.addInputBox("vend_2", "Fast Vend Amount Buy", std::to_string(amountvend), 3);
            a.addSpacer(SPACER_SMALL);
            a.endDialog("vendudu", "Done", "Cancel");
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = a.finishDialog();
            g_server->send(true, liste);
            return true;
        }
        else if (find_command(chat, "proxy")) {
            proxypack();
            return true;
        }
        return false;
    }
    if (packet.find("game_version|") != -1) {
        rtvar var = rtvar::parse(packet);
        var.set("meta", g_server->meta);
        packet = var.serialize();
        packet += "requestedName|\n";
        packet += "tankIDPass|\n";
        gt::in_game = false;
        std::ifstream vr0;
        std::ifstream vr1;
        std::ifstream vr2;
        std::ifstream vr3;
        std::ifstream vr4;
        std::ifstream vr5;
        std::ifstream vr6;
        std::ifstream vr7;
        std::ifstream vr8;
        std::ifstream vr9;
        std::ifstream vr10;
        std::ifstream vr11;
        std::ifstream vr12;
        vr0.open("cntr.txt");
        vr0 >> gt::flag;
        vr0.close();
        vr0.open("name1.txt");
        vr0 >> name1;
        vr0.close();
        vr0.open("name2.txt");
        vr0 >> name2;
        vr0.close();
        vr0.open("name3.txt");
        vr0 >> name3;
        vr0.close();
        vr0.open("name4.txt");
        vr0 >> name4;
        vr0.close();
        vr0.open("name5.txt");
        vr0 >> name5;
        vr0.close();
        vr1.open("detect.txt");
        vr1 >> moddetect;
        vr1.close();
        vr2.open("leavemod.txt");
        vr2 >> exitmod;
        vr2.close();
        vr3.open("wp.txt");
        vr3 >> mode;
        vr3.close();
        vr4.open("wmode.txt");
        vr4 >> wrench;
        vr4.close();
        vr5.open("fdrop.txt");
        vr5 >> fastdrop;
        vr5.close();
        vr6.open("unaccmod.txt");
        vr6 >> unaccmod;
        vr6.close();
        vr7.open("realfake.txt");
        vr7 >> realfake;
        vr7.close();
        vr8.open("gaspull.txt");
        vr8 >> gaspull;
        vr8.close();
        vr9.open("fasttrash.txt");
        vr9 >> fasttrash;
        vr9.close();
        vr10.open("autoacc.txt");
        vr10 >> autoacc;
        vr10.close();
        vr12.open("spamtxt.txt");
        vr12 >> spam_text;
        vr12.close();
        cout << "[SERVER]: Proxy is using Meta: " + g_server->meta + "\n";
        update_rpc("Currently In Game.");
        gt::send_log("`2Logging in with `#Visual Premium Proxy");
        PRINTS("Login information is being spoofed...\n");
        gt::send_log("`#Welcome `3Dear: `2Proxy User `4Enjoy `bVisual Premium Proxy");
        g_server->send(false, packet);
        return true;
    }
    return false;
}

bool events::out::gamemessage(std::string packet) {
    rtvar var = rtvar::parse(packet);
    string msg = var.get("msg");
    PRINTS("Game message: %s\n", packet.c_str());
    if (msg.find("`4SERVER OVERLOADED`` : Sorry, our servers are currently at max capacity with 75000 online, please try later. We are working to improve this!") != -1)
    {
        g_server->reconnect();
        gt::send_log("Reconnecting..");
        return true;
    }
    if (packet == "action|quit") {
        g_server->quit();
        return true;
    }

    return false;
}

bool events::out::state(gameupdatepacket_t* packet) {
    if (!g_server->m_world.connected)
        return false;
    bool key = ((GetKeyState(VK_SHIFT) & 0x8000) != 0) ? true : false;
    if (pathfinder == true && key == true && (packet->m_packet_flags == UPDATE_PACKET_PUNCH_TILE_LEFT || packet->m_packet_flags == UPDATE_PACKET_PUNCH_TILE_RIGHT)) {
        g_server->MoveXY(packet->m_state1, packet->m_state2);
        return true;
    }
    //g_server->m_world.local.pos = vector2_t{ packet->m_vec_x, packet->m_vec_y };
    PRINTS("local pos: %.0f %.0f\n", packet->m_vec_x, packet->m_vec_y);
    return false;
}


bool events::in::variantlist(gameupdatepacket_t* packet) {
    variantlist_t varlist{};
    auto extended = utils::get_extended(packet);
    extended += 4; //since it casts to data size not data but too lazy to fix this
    varlist.serialize_from_mem(extended);
    PRINTC("varlist: %s\n", varlist.print().c_str());
    auto func = varlist[0].get_string();
    auto func2 = varlist[3].get_string();
    /*if (func.find("OnGuildDataChanged") != -1) {
        if (func2.find("5956")) {
            if (moddetect)
                thread(detect).detach();
            return true;
        }
    }*/
    //probably subject to change, so not including in switch statement.
    if (func.find("OnSuperMainStartAcceptLogon") != -1)
        gt::in_game = true;

    switch (hs::hash32(func.c_str())) {
        //solve captcha
    /*case fnv32("onShowCaptcha"): {
            gt::send_log("`9Solving Captcha...");
            auto menu = varlist[1].get_string();
            auto g = split(menu, "|");
            std::string captchaid = g[1];
            utils::replace(captchaid, "0098/captcha/generated/", "");
            utils::replace(captchaid, "PuzzleWithMissingPiece.rttex", "");
            captchaid = captchaid.substr(0, captchaid.size() - 1);

            http::Request request{ "http://solar-bot.ga/captcha.php?captcha=" + captchaid };
            const auto response = request.send("GET");
            std::string output = std::string{ response.body.begin(), response.body.end() };
            g_server->send(false, "action|dialog_return\ndialog_name|puzzle_captcha_submit\ncaptcha_answer|" + output + "|CaptchaID|" + g[4]);
            gt::send_log("`cSolved Captcha As `9" + output);
            return true;//success
        } break;*/
    case fnv32("OnRequestWorldSelectMenu"): {
        old_world = g_server->m_world.name;
        auto& world = g_server->m_world;
        world.players.clear();
        world.local = {};
        world.connected = false;
        world.name = "EXIT";
    } break;
    case fnv32("OnSendToServer"): g_server->redirect_server(varlist); return true;
    case fnv32("OnTalkBubble"): {
        auto wry = varlist[2].get_string();
        if (wry.find("the wheel and got") != -1)
        {
            if (packet->m_int_data == 1800)
            {
                if (realfake)
                    varlist[2] = "`0[`2REAL`0]`w " + varlist[2].get_string();
                g_server->send(true, varlist);
                return true;
            }
            if (realfake)
                varlist[2] = varlist[2].get_string() + " `0[`4FAKE`0]`w";
            g_server->send(true, varlist);
            return true;
        }


        g_server->send(true, varlist);
        return true;
    } break;
    case fnv32("OnConsoleMessage"): {
        auto& cnsl = varlist[1].get_string();
        varlist[1] = "`9[`#VISUAL PROXY```9]`` " + varlist[1].get_string();
        if (spam) {

            if (cnsl.find("`6>>`4Spam detected!") != -1) {
                spam = false;
                gt::send_log("Automatically stopped spamming for `4Spam Detect!");
                return true;
            }
        }
        if (cnsl.find("Sorry, our servers are currently at max capacity with") != -1) {
            //g_server->reconnect();
            return true;
        }
        if (cnsl.find("World Lock``.``") != -1) {
            compresswltodl();
            return true;
        }
        gameupdatepacket_t pkt{};
        pkt.m_type = PACKET_ITEM_ACTIVATE_OBJECT_REQUEST;
        if (pkt.m_int_data > 112) {
            gt::send_log("Collected " + to_string(pkt.m_count) + " gems");
            return true;
        }
        if (cnsl.find("World Lock``.``") != -1) {
            std::ifstream vr;
            if (!vr) {
                std::ofstream vw;
                vw.open("Collecteditems.txt");
                vw << cnsl + "\n";
                vw.close();
            }
            vr >> cnsl;
            vr.close();
            return true;
        }
        if (cnsl.find("Diamond Lock``.``") != -1) {
            std::ifstream vr;
            if (!vr) {
                std::ofstream vw;
                vw.open("Collecteditems.txt");
                vw << cnsl + "\n";
                vw.close();
            }
            vr >> cnsl;
            vr.close();
            return true;
        }
        if (cnsl.find("Blue Gem Lock``.``") != -1) {
            std::ifstream vr;
            if (!vr) {
                std::ofstream vw;
                vw.open("Collecteditems.txt");
                vw << cnsl + "\n";
                vw.close();
            }
            vr >> cnsl;
            vr.close();
            return true;
        }
        if (autoacc) {
            if (cnsl.find("Wrench yourself to accept.") != -1) {
                string netID = to_string(g_server->m_world.local.netid);
                nopulldialog = true;
                g_server->send(false, "action|wrench\n|netid|" + netID);
                g_server->send(false, "action|dialog_return\ndialog_name|popup\nnetID|" + netID + "|\nbuttonClicked|acceptlock");
                autoaccc = true;
                g_server->send(false, "action|dialog_return\ndialog_name|acceptaccess");
                variantlist_t varlist{ "OnTextOverlay" };
                varlist[1] = "`2ACCESS GRANTED!";
                thread(autoacca).detach();
                g_server->send(true, varlist);
            }
        }
        if (gaspull) {
            if (cnsl.find("gas") != -1) {
                if (cnsl.find("`w") != -1) {
                    std::string nasmasma = cnsl.substr(cnsl.find("[W]_ `6<`w") + 10, cnsl.length() - cnsl.find("[W]_ `6<`w") - 1);
                    nasmasma.erase(nasmasma.begin() + nasmasma.find("``>``"), nasmasma.end());
                    g_server->send(false, "action|input\n|text|/pull " + nasmasma);
                }
            }
        }

        g_server->send(true, varlist);
        return true;
    } break;
    case fnv32("OnDialogRequest"): {
        auto content = varlist[1].get_string();

        if (content.find("set_default_color|`o") != -1)
        {
            if (content.find("end_dialog|captcha_submit||Submit|") != -1)
            {
                gt::solve_captcha(content);
                return true;
            }
        }
        if (nopulldialog) {
            if (content.find("embed_data|netID") != -1) {
                return true;
            }
        }
        if (wrench) {
            std::string bruhmomento = content.substr(content.find("embed_data|netID") + 17, content.length() - content.find("embed_data|netID") - 1);
            if (content.find("set_default_color|`o") != -1) {
                if (content.find("embed_data|netID") != -1) {
                    return true;
                }
            }
        }
        if (taxsystem) {
            if (fastmode) {
                std::string itemid = content.substr(content.find("embed_data|itemID|") + 18, content.length() - content.find("embed_data|itemID|") - 1);
                std::string count = content.substr(content.find("count||") + 7, content.length() - content.find("count||") - 1);
                if (content.find("embed_data|itemID|") != -1) {
                    if (content.find("Drop") != -1) {
                        if (itemid.find("242") != -1) {
                            return true;
                        }
                    }
                }
            }
        }
        if (dropwl) {
            if (content.find("Drop") != -1) {
                Sleep(50);
                dropwl = false;
                return true;
            }
        }
        if (dropdl) {
            if (content.find("Drop") != -1) {
                Sleep(50);
                dropdl = false;
                return true;
            }
        }
        if (dropbgl) {
            if (content.find("Drop") != -1) {
                Sleep(50);
                dropbgl = false;
                return true;
            }
        }
        if (taxsystem == true)
        {
            if (content.find("Drop") != -1) {
                if (content.find("embed_data|itemID|") != -1) {
                    std::string itemid = content.substr(content.find("embed_data|itemID|") + 18, content.length() - content.find("embed_data|itemID|") - 1);
                    if (itemid.find("1796") != -1) {
                        std::string counta = content.substr(content.find("count||") + 7, content.length() - content.find("count||") - 1);
                        int count = stoi(counta) * 100;
                        int bruh = count % 10;
                        int bruh2 = count;
                        if (bruh == 1) bruh2 = bruh2 - 1;
                        if (bruh == 2) bruh2 = bruh2 - 2;
                        if (bruh == 3) bruh2 = bruh2 - 3;
                        if (bruh == 4) bruh2 = bruh2 - 4;
                        if (bruh == 5) bruh2 = bruh2 + 5;
                        if (bruh == 6) bruh2 = bruh2 + 4;
                        if (bruh == 7) bruh2 = bruh2 + 3;
                        if (bruh == 8) bruh2 = bruh2 + 2;
                        if (bruh == 9) bruh2 = bruh2 + 1;

                        int bruh3 = bruh2 * yuzde / 100;
                        float bruh4 = count - bruh3;
                        int dl = (int)(bruh4 / 100);
                        int wl = ((bruh4 / 100) - dl) * 100;
                        gt::send_log("`3DL: " + std::to_string(dl) + " `0| `9WL: " + std::to_string(wl));
                        if (fastmode == true)
                        {
                            if (dl != 0) g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|1796|\ncount|" + std::to_string(dl));

                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                            if (wl != 0) g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|242|\ncount|" + std::to_string(wl));

                            return true;

                        }
                        else
                        {
                            if (wl != 0) g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|242|\ncount|" + std::to_string(wl));
                            if (dl != 0) {
                                varlist[1] = "set_default_color|`o\nadd_label_with_icon|big|`wDrop Diamond Lock``|left|1796|\nadd_textbox|How many to drop?|left|\nadd_text_input|count||" + to_string(dl) + "|5|\nembed_data|itemID|1796\nend_dialog|drop_item|Cancel|OK|";
                                g_server->send(true, varlist);
                            }
                            return true;
                        }
                    }
                    if (itemid.find("242") != -1) {
                        std::string count = content.substr(content.find("count||") + 7, content.length() - content.find("count||") - 1);
                        int bruh = stoi(count) % 10;
                        int bruh2 = stoi(count);
                        if (bruh == 1) bruh2 = bruh2 - 1;
                        if (bruh == 2) bruh2 = bruh2 - 2;
                        if (bruh == 3) bruh2 = bruh2 - 3;
                        if (bruh == 4) bruh2 = bruh2 - 4;
                        if (bruh == 5) bruh2 = bruh2 + 5;
                        if (bruh == 6) bruh2 = bruh2 + 4;
                        if (bruh == 7) bruh2 = bruh2 + 3;
                        if (bruh == 8) bruh2 = bruh2 + 2;
                        if (bruh == 9) bruh2 = bruh2 + 1;

                        int bruh3 = bruh2 * yuzde / 100;
                        int bruh4 = stoi(count) - bruh3;
                        gt::send_log("`3DL: 0 `0| `9WL: " + std::to_string(bruh4));
                        if (fastmode == true)
                        {
                            g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|" + itemid + "|\ncount|" + std::to_string(bruh4));
                            return true;

                        }
                        else
                        {
                            varlist[1] = "set_default_color|`o\nadd_label_with_icon|big|`wDrop World Lock``|left|242|\nadd_textbox|How many to drop?|left|\nadd_text_input|count||" + to_string(bruh4) + "|5|\nembed_data|itemID|242\nend_dialog|drop_item|Cancel|OK|";
                            g_server->send(true, varlist);
                            return true;
                        }
                    }
                }
            }
        }
        if (asurg) {
            if (content.find("end_dialog|surgery||") != -1)
            {
                // maybe use switch statement is better but idc
                if (content.find("tool4312") != -1) { // defibrilator
                    // use defibrilator
                    g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool4312");
                    PRINTC("DEFIBRILATOR");
                    variantlist_t varlist{ "OnTextOverlay" };
                    varlist[1] = "DEFIBRILATOR!";
                    g_server->send(true, varlist);
                }
                else if (content.find("|tool1260|") == std::string::npos // scalpel
                    && content.find("|tool1262|") == std::string::npos // anes
                    && content.find("|tool1264|") == std::string::npos // antisept
                    && content.find("|tool1266|") == std::string::npos // antibio
                    && content.find("|tool1268|") == std::string::npos // splint
                    && content.find("|tool1270|") == std::string::npos // stit
                    && content.find("|tool4308|") == std::string::npos // pins
                    && content.find("|tool4310|") == std::string::npos // transfusion
                    && content.find("|tool4312|") == std::string::npos // defibrilator
                    && content.find("|tool4314|") == std::string::npos // clamp
                    && content.find("|tool4316|") == std::string::npos // ultrasound
                    && content.find("|tool4318|") == std::string::npos // lab kit
                    )
                { // inefficient but idc
                    // use sponge
                    g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1258");
                    PRINTC("SPONGE");
                    variantlist_t varlist{ "OnTextOverlay" };
                    varlist[1] = "SPONGE!";
                    g_server->send(true, varlist);
                }
                else if (content.find("Patient is `6losing blood") != -1 || content.find("Patient is losing blood") != -1) {
                    if (content.find("Fix It!") != -1) {
                        // use stit
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1270");
                        PRINTC("STITCH");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "STITCH!";
                        g_server->send(true, varlist);
                    }
                    else if (content.find("tool4314") != -1) { // clamp
                        // use clamp
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool4314");
                        PRINTC("CLAMP");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "CLAMP!";
                        g_server->send(true, varlist);
                    }
                    else {
                        // use stit
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1270");
                        PRINTC("STITCH");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "STITCH!";
                        g_server->send(true, varlist);
                    }
                }
                else if (content.find("Patient's fever is ") != -1) {
                    if (content.find("tool4318") != -1) {
                        // use lab kit
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool4318");
                        PRINTC("LAB KIT");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "LAB KIT!";
                        g_server->send(true, varlist);
                    }
                    else {
                        // use antibio
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1266");
                        PRINTC("ANTIBIOTICS");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "ANTIBIOTICS!";
                        g_server->send(true, varlist);
                    }
                }
                else if (content.find("Status: `6Coming to``|left|") != -1) {
                    // use anes
                    g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1262");
                    PRINTC("ANESTHETIC");
                    variantlist_t varlist{ "OnTextOverlay" };
                    varlist[1] = "ANESTHETIC!";
                    g_server->send(true, varlist);
                }
                else if (content.find("add_smalltext|Pulse: `4Extremely Weak``") != -1) {
                    // use transfusion
                    g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool4310");
                    PRINTC("TRANSFUSION");
                    variantlist_t varlist{ "OnTextOverlay" };
                    varlist[1] = "TRANSFUSION!";
                    g_server->send(true, varlist);
                }
                else if (content.find(" shattered``") != -1 && content.substr(content.find("Incisions: `") + 13, 1) != "0") {
                    // use pins
                    g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool4308");
                    PRINTC("PINS");
                    variantlist_t varlist{ "OnTextOverlay" };
                    varlist[1] = "PINS!";
                    g_server->send(true, varlist);
                }
                else if (content.find(" broken``") != -1) {
                    // use splint
                    g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1268");
                    PRINTC("SPLINT");
                    variantlist_t varlist{ "OnTextOverlay" };
                    varlist[1] = "SPLINT!";
                    g_server->send(true, varlist);
                }
                else if (content.find("Fix It!") != -1) {
                    if (content.substr(content.find("Incisions: `") + 13, 1) != "0") {
                        // use stit
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1270");
                        PRINTC("STITCH");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "STITCH!";
                        g_server->send(true, varlist);
                    }
                    else {
                        // use fix it
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1296"); // might be wrong
                        PRINTC("FIX IT!");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "FIX IT!";
                        g_server->send(true, varlist);
                    }
                }
                else if (content.find("Temp: `6") != -1 || content.find("Temp: `4") != -1) {
                    if (content.find("tool4318") != -1) {
                        // use lab kit
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool4318");
                        PRINTC("LAB KIT");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "LAB KIT!";
                        g_server->send(true, varlist);
                    }
                    else {
                        // use antibio
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1266");
                        PRINTC("ANTIBIOTIC");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "ANTIBIOTIC!";
                        g_server->send(true, varlist);
                    }
                }
                else if (content.find("tool4316") == std::string::npos) { // ultrasound not found
                    if (content.find("Status: `4Awake``|") == std::string::npos && content.find("Status: `3Awake``|") == std::string::npos) {
                        // use scalpel
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1260");
                        PRINTC("SCALPEL");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "SCALPEL!";
                        g_server->send(true, varlist);
                    }
                    else {
                        // use anes
                        g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1262");
                        PRINTC("ANESTHETIC");
                        variantlist_t varlist{ "OnTextOverlay" };
                        varlist[1] = "ANESTHETIC!";
                        g_server->send(true, varlist);
                    }
                }
                else if (content.find("tool4316") != -1) { // ultrasound found
                    // use ultrasound
                    g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool4316");
                    PRINTC("ULTRASOUND");
                    variantlist_t varlist{ "OnTextOverlay" };
                    varlist[1] = "ULTRASOUND!";
                    g_server->send(true, varlist);
                }
                else if (content.find("Temp: `2") != -1) {
                    // use antibio
                    g_server->send(false, "action|dialog_return\ndialog_name|surgery\nbuttonClicked|tool1266");
                    PRINTC("ANTIBIOTIC");
                    variantlist_t varlist{ "OnTextOverlay" };
                    varlist[1] = "ANTIBIOTIC!";
                    g_server->send(true, varlist);
                }
                return true;
            }
        }
        if (content.find("add_label_with_icon|big|`wThe Growtopia Gazette") != -1) {
            g_server->send(false, "action|dialog_return\ndialog_name|gazette");
            proxypack();
            return true;
        }
        if (autobgl) {
            if (content.find("Dial a number to call somebody in Growtopia.") != -1) {
                int x = std::stoi(content.substr(content.find("embed_data|tilex|") + 17, content.length() - content.find("embed_data|tilex|") - 1));
                int y = std::stoi(content.substr(content.find("embed_data|tiley|") + 17, content.length() - content.find("embed_data|tiley|") - 1));
                g_server->send(false, "action|dialog_return\ndialog_name|phonecall\ntilex|" + to_string(x) + "|\ntiley|" + to_string(y) + "|\nnum|-2|\ndial|53785");
                return true;
            }
            if (autobgl) {
                if (content.find("embed_data|num|53785") != -1) {
                    int x = std::stoi(content.substr(content.find("embed_data|tilex|") + 17, content.length() - content.find("embed_data|tilex|") - 1));
                    int y = std::stoi(content.substr(content.find("embed_data|tiley|") + 17, content.length() - content.find("embed_data|tiley|") - 1));
                    g_server->send(false, "action|dialog_return\ndialog_name|phonecall\ntilex|" + to_string(x) + "|\ntiley|" + to_string(y) + "|\nnum|53785|\nbuttonClicked|chc5");
                    return true;
                }
            }
        }
        if (autobgl) {
            if (content.find("Excellent! I'm happy to sell you a Blue Gem Lock in exchange for 100 Diamond Lock") != -1) {
                int x = std::stoi(content.substr(content.find("embed_data|tilex|") + 17, content.length() - content.find("embed_data|tilex|") - 1));
                int y = std::stoi(content.substr(content.find("embed_data|tiley|") + 17, content.length() - content.find("embed_data|tiley|") - 1));
                g_server->send(false, "action|dialog_return\ndialog_name|phonecall\ntilex|" + to_string(x) + "|\ntiley|" + to_string(y) + "|\nnum|-34|\nbuttonClicked|chc0");
                return true;
            }
        }
        if (fastdrop) {
            std::string itemid = content.substr(content.find("embed_data|itemID|") + 18, content.length() - content.find("embed_data|itemID|") - 1);
            std::string count = content.substr(content.find("count||") + 7, content.length() - content.find("count||") - 1);
            if (content.find("embed_data|itemID|") != -1) {
                if (content.find("Drop") != -1) {
                    g_server->send(false, "action|dialog_return\ndialog_name|drop_item\nitemID|" + itemid + "|\ncount|" + count);
                    return true;
                }
            }
        }
        if (fasttrash) {
            std::string itemid = content.substr(content.find("embed_data|itemID|") + 18, content.length() - content.find("embed_data|itemID|") - 1);
            std::string count = content.substr(content.find("you have ") + 9, content.length() - content.find("you have ") - 1);
            std::string delimiter = ")";
            std::string token = count.substr(0, count.find(delimiter));
            if (content.find("embed_data|itemID|") != -1) {
                if (content.find("Recycle") != -1) {
                    g_server->send(false, "action|dialog_return\ndialog_name|trash_item\nitemID|" + itemid + "|\ncount|" + token);
                    return true;
                }
            }
        }
        if (gravty) {
            gameupdatepacket_t pkt{};
            pkt.m_type = PACKET_SET_CHARACTER_STATE;
            pkt.m_vec2_x = 500.f;  //gravity
            pkt.m_vec2_y = 250.f;   //move speed
            pkt.m_vec_x = 64.f;     //punch range
            pkt.m_vec_y = 64.f;     //build range
            pkt.m_jump_amount = 0;  //for example unlim jumps set it to high which causes ban
            pkt.m_player_flags = 0; //effect flags. good to have as 0 if using mod noclip, or etc.
            g_server->send(false, NET_MESSAGE_GAME_PACKET, (uint8_t*)&pkt, sizeof(gameupdatepacket_t));
            return true;
        }
        if (fasttrash) {
            std::string itemid = content.substr(content.find("embed_data|itemID|") + 18, content.length() - content.find("embed_data|itemID|") - 1);
            std::string count = content.substr(content.find("you have ") + 9, content.length() - content.find("you have ") - 1);
            std::string delimiter = ")";
            std::string token = count.substr(0, count.find(delimiter));
            if (content.find("embed_data|itemID|") != -1) {
                if (content.find("Trash") != -1) {
                    g_server->send(false, "action|dialog_return\ndialog_name|trash_item\nitemID|" + itemid + "|\ncount|" + token);
                    return true;
                }
            }

            //hide unneeded ui when resolving
            //for the /uid command

        }
        else if (gt::resolving_uid2 && content.find("`4Stop ignoring") != -1) {
            int pos = content.rfind("|`4Stop ignoring");
            auto ignore_substring = content.substr(0, pos);
            auto uid = ignore_substring.substr(ignore_substring.rfind("add_button|") + 11);
            auto uid_int = atoi(uid.c_str());
            if (uid_int == 0) {
                gt::resolving_uid2 = false;
                gt::send_log("name resolving seems to have failed.");
            }
            else {
                gt::send_log("Target UID: " + uid);
                g_server->send(false, "action|dialog_return\ndialog_name|friends\nbuttonClicked|" + uid);
                g_server->send(false, "action|dialog_return\ndialog_name|friends_remove\nfriendID|" + uid + "|\nbuttonClicked|remove");
            }
            return true;
        }
    } break;
    case fnv32("OnRemove"): {
        auto text = varlist.get(1).get_string();
        if (text.find("netID|") == 0) {
            auto netid = atoi(text.substr(6).c_str());

            if (netid == g_server->m_world.local.netid)
                g_server->m_world.local = {};

            auto& players = g_server->m_world.players;
            for (size_t i = 0; i < players.size(); i++) {
                auto& player = players[i];
                if (player.netid == netid) {
                    players.erase(std::remove(players.begin(), players.end(), player), players.end());
                    break;
                }
            }
        }
    } break;
        /*case fnv32("OnGuildDataChanged"): {
            //mod detect v2
            auto mod1 = varlist[1].get_string();
            auto mod2 = varlist[2].get_string();
            auto mod3 = varlist[3].get_string();
            auto mod4 = varlist[4].get_string();
            mod2.find("mstate")->m_values[0] = "1";
            varlist[1] = mod1;
            varlist[2] = mod2;
            varlist[3] = mod3;
            varlist[4] = mod4;
            g_server->send(true, mod2);
            g_server->send(true, varlist);
            return true;
        }break;*/
    case fnv32("OnSpawn"): {
        std::string meme = varlist.get(1).get_string();
        rtvar var = rtvar::parse(meme);
        auto name = var.find("name");
        auto netid = var.find("netID");
        auto onlineid = var.find("onlineID");
        if (name && netid && onlineid) {
            player ply{};
            ply.mod = false;
            ply.invis = false;
            ply.name = name->m_value;
            ply.country = var.get("country");
            if (var.find("posXY"))
                ply.pos = vector2_t(atoi((var.find("posXY")->m_values.size() > 0 ? var.find("posXY")->m_values[0].c_str() : "")), atoi((var.find("posXY")->m_values.size() > 1 ? var.find("posXY")->m_values[1].c_str() : "")));
            ply.userid = var.get_int("userID");
            ply.netid = var.get_int("netID");
            if (meme.find("type|local") != -1) {
                //set mod state to 1 (allows infinite zooming, this doesnt ban cuz its only the zoom not the actual long punch)
                var.find("mstate")->m_values[0] = "1";
                //var.find("smstate")->m_values[0] = "1";
                g_server->m_world.local = ply;
                g_server->m_world.local.country = ply.country;
                g_server->m_world.local.invis = ply.invis;
                g_server->m_world.local.mod = ply.mod;
                g_server->m_world.local.name = ply.name;
                g_server->m_world.local.netid = ply.netid;
                g_server->m_world.local.userid = ply.userid;
                g_server->m_world.local.pos = ply.pos;
                g_server->m_world.local.state = UPDATE_PACKET_PLAYER_MOVING_RIGHT;
            }
            g_server->m_world.players.push_back(ply);
            auto str = var.serialize();
            utils::replace(str, "onlineID", "onlineID|");
            varlist[1] = str;
            PRINTC("new: %s\n", varlist.print().c_str());
            g_server->send(true, varlist, -1, -1);
            /*if (moddetect) {
                string m1 = "25";
                string m2 = "22353525";
                string m3 = "24969470";
                string m4 = "25181947";
                string m5 = "24233063";
                string m6 = "36709249";
                string m7 = "36559671";
                string m8 = "8651339";
                string m9 = "41538029";
                string m10 = "682";
                string m11 = "538522";
                string m12 = "25374";
                string m13 = "553625";
                string m14 = "73346";
                string m15 = "536707";
                string m16 = "29160268";
                string m17 = "15006163";
                string m18 = "16966321";
                string m19 = "32036726";
                string m20 = "36310143";
                string m21 = "54432183";
                string m22 = "29121568";
                string m23 = "41538133";
                string m24 = "44250099";
                string m25 = "23369178";
                string s0 = "23274860";
                string s1 = "22242821";
                string s2 = "25176812";
                string s3 = "45400905";
                string s4 = "47850061";
                string s5 = "45518360";
                string s6 = "38690496";
                string s7 = "25773007";
                string s8 = "41539504";
                string s9 = "41537947";
                string s10 = "294619";
                string s11 = "33836788";
                string s12 = "36713808";
                string s13 = "41537968";
                string s14 = "308143";
                string s15 = "3804202";
                string s16 = "41208310";
                string s17 = "43432233";
                string s18 = "38753466";
                string s19 = "7275489";
                string s20 = "47093010";
                string s21 = "47119248";
                string s22 = "47094621";
                string s23 = "41263973";
                string s24 = "42705852";
                string s25 = "300429";
                string s26 = "50736935";
                string s27 = "49457053";
                string s28 = "50733363";
                string s29 = "42372593";
                string s30 = "45035973";
                string s31 = "47193235";
                string s32 = "51202047";
                string s33 = "29432008";
                string s34 = "27410283";
                string s35 = "4153809";
                reportmod(m1);
                reportmod(m2);
                reportmod(m3);
                reportmod(m4);
                reportmod(m5);
                reportmod(m6);
                reportmod(m7);
                reportmod(m8);
                reportmod(m9);
                reportmod(m10);
                reportmod(m11);
                reportmod(m12);
                reportmod(m13);
                reportmod(m14);
                reportmod(m15);
                reportmod(m16);
                reportmod(m17);
                reportmod(m18);
                reportmod(m19);
                reportmod(m20);
                reportmod(m21);
                reportmod(m22);
                reportmod(m23);
                reportmod(m24);
                reportmod(m25);
                reportmod(s1);
                reportmod(s2);
                reportmod(s3);
                reportmod(s4);
                reportmod(s5);
                reportmod(s6);
                reportmod(s7);
                reportmod(s8);
                reportmod(s9);
                reportmod(s10);
                reportmod(s11);
                reportmod(s12);
                reportmod(s13);
                reportmod(s14);
                reportmod(s15);
                reportmod(s16);
                reportmod(s17);
                reportmod(s18);
                reportmod(s19);
                reportmod(s20);
                reportmod(s21);
                reportmod(s22);
                reportmod(s23);
                reportmod(s24);
                reportmod(m25);
                reportmod(s26);
                reportmod(s27);
                reportmod(s28);
                reportmod(s29);
                reportmod(s30);
                reportmod(s31);
                reportmod(s32);
                reportmod(s33);
                reportmod(s34);
                reportmod(s35);
                return true;
            }*/
            if (pullbynames) {
                std::string n = meme.substr(meme.find("name|`w") + 7, meme.length() - meme.find("name|`w") - 1);
                if (name1.length() < 3) {
                    return true;
                }
                if (n.find(name1) != -1) {
                    g_server->send(false, "action|input\n|text|/pull " + name1);
                    return true;
                }
            }
            if (pullbynames) {
                std::string n = meme.substr(meme.find("name|`w") + 7, meme.length() - meme.find("name|`w") - 1);
                if (name2.length() < 3) {
                    return true;
                }
                if (n.find(name2) != -1) {
                    g_server->send(false, "action|input\n|text|/pull " + name2);
                    return true;
                }
            }
            if (pullbynames) {
                std::string n = meme.substr(meme.find("name|`w") + 7, meme.length() - meme.find("name|`w") - 1);
                if (name3.length() < 3) {
                    return true;
                }
                if (n.find(name3) != -1) {
                    g_server->send(false, "action|input\n|text|/pull " + name3);
                    return true;
                }
            }
            if (pullbynames) {
                std::string n = meme.substr(meme.find("name|`w") + 7, meme.length() - meme.find("name|`w") - 1);
                if (name4.length() < 3) {
                    return true;
                }
                if (n.find(name4) != -1) {
                    g_server->send(false, "action|input\n|text|/pull " + name4);
                    return true;
                }
            }
            if (pullbynames) {
                std::string n = meme.substr(meme.find("name|`w") + 7, meme.length() - meme.find("name|`w") - 1);
                if (name5.length() < 3) {
                    return true;
                }
                if (n.find(name5) != -1) {
                    g_server->send(false, "action|input\n|text|/pull " + name5);
                    return true;
                }
            }
            if (pulas)
            {
                string plyr = ply.name.substr(2).substr(0, ply.name.length() - 4);
                {
                    g_server->send(false, "action|input\n|text|/pull " + plyr);
                    return true;
                }
            }
            if (banas)
            {
                string plyr = ply.name.substr(2).substr(0, ply.name.length() - 4);
                {
                    g_server->send(false, "action|input\n|text|/ban " + plyr);
                    return true;
                }
            }
        }
        return true;
    } break;
        /*case fnv32("OnNameChanged"): {
            auto& name = varlist[1].get_string();
            std::thread(itsmod, packet->m_player_flags, name).detach();
            if (pulas)
            {
                string plyr = name.substr(2).substr(0, name.length() - 2);
                {
                    g_server->send(false, "action|input\n|text|/pull " + plyr);
                    return true;
                }
            }
            return false;*/
    }
    return false;
}
void events::in::writetofile(gameupdatepacket_t* packet) {
    std::ofstream sethost("text.txt");
    if (sethost.is_open()) {
        sethost << packet;
        sethost.close();
    }
    cout << packet;
}

bool events::in::OnChangeObject(gameupdatepacket_t* packet) {
    if (packet->m_player_flags == -1) {
        g_server->m_world.lastDroppedUid = g_server->m_world.lastDroppedUid + 1;
        DroppedItem item;
        item.uid = g_server->m_world.lastDroppedUid;
        item.pos.m_x = packet->m_vec_x;
        item.pos.m_y = packet->m_vec_y;
        item.itemID = packet->m_int_data;
        item.count = (int)packet->m_struct_flags;
        item.flags = packet->m_packet_flags;

        g_server->m_world.objects[item.uid] = item;

    }
    if (ac &&
        packet->m_vec_x != 0 &&
        packet->m_vec_y != 0 &&
        packet->m_vec_y <= (g_server->lastPos.m_y - 30) &&
        packet->m_vec_y >= (g_server->lastPos.m_y - 75) &&
        packet->m_vec_x >= (g_server->lastPos.m_x - 80) &&
        packet->m_vec_x <= (g_server->lastPos.m_x + 80));

    if (packet->m_item == -1 && packet->m_player_flags != -1) {
        g_server->m_world.lastDroppedUid = packet->m_int_data;
        g_server->m_world.objects.erase(packet->m_int_data);
    }
    return false;
}

bool events::in::generictext(std::string packet) {
    PRINTC("Generic text: %s\n", packet.c_str());

    return false;
}

bool events::in::gamemessage(std::string packet) {
    PRINTC("Game message: %s\n", packet.c_str());

    if (gt::resolving_uid2) {
        if (packet.find("PERSON IGNORED") != -1) {
            g_server->send(false, "action|dialog_return\ndialog_name|friends_guilds\nbuttonClicked|showfriend");
            g_server->send(false, "action|dialog_return\ndialog_name|friends\nbuttonClicked|friend_all");
        }
        else if (packet.find("Nobody is currently online with the name") != -1) {
            gt::resolving_uid2 = false;
            gt::send_log("Target is offline, cant find uid.");
        }
        else if (packet.find("Clever perhaps") != -1) {
            gt::resolving_uid2 = false;
            gt::send_log("Target is a moderator, can't ignore them.");
        }
    }
    return false;
}

bool events::in::sendmapdata(gameupdatepacket_t* packet) {
    g_server->m_world = {};
    auto extended = utils::get_extended(packet);
    extended += 4;
    auto data = extended + 6;
    auto name_length = *(short*)data;

    char* name = new char[name_length + 1];
    memcpy(name, data + sizeof(short), name_length);
    char none = '\0';
    memcpy(name + name_length, &none, 1);

    g_server->m_world.name = std::string(name);
    g_server->m_world.connected = true;
    delete[] name;
    PRINTC("world name is %s\n", g_server->m_world.name.c_str());

    return false;
}

bool events::in::state(gameupdatepacket_t* packet) {
    if (!g_server->m_world.connected)
        return false;
    if (packet->m_player_flags == -1)
        return false;

    auto& players = g_server->m_world.players;
    for (auto& player : players) {
        if (player.netid == packet->m_player_flags) {
            //player.pos = vector2_t{ packet->m_vec_x, packet->m_vec_y };
            PRINTC("player %s position is %.0f %.0f\n", player.name.c_str(), player.pos.m_x, player.pos.m_y);
            break;
        }
    }
    return false;
}
bool events::in::tracking(std::string packet) {
    PRINTC("Tracking packet: %s\n", packet.c_str());
    if (packet.find("eventName|consume") != -1)
    {
        if (packet.find("itemid|^^2380") != -1)
        {
            string amount = packet.substr(packet.find("growid|") + 7, packet.length() - packet.find("growid|") - 1);
            gt::send_log("`9Dropped bgls: `c" + amount);
            return true;
        }
    }
    if (packet.find("eventName|305_DROP") != -1)
    {
        if (packet.find("Item_id|^^7188") != -1)
        {
            string amount = packet.substr(packet.find("Amount_dropped|") + 15, packet.length() - packet.find("Amount_dropped|") - 1);
            gt::send_log("`9Dropped bgls: `c" + amount);
            return true;
        }
    }
    if (packet.find("eventName|305_DROP") != -1)
    {
        if (packet.find("Item_id|^^1796") != -1)
        {
            string amount = packet.substr(packet.find("Amount_dropped|") + 15, packet.length() - packet.find("Amount_dropped|") - 1);
            gt::send_log("`9Dropped dls: `c" + amount);
            return true;
        }
    }
    if (packet.find("eventName|305_DROP") != -1)
    {
        if (packet.find("Item_id|^^242") != -1)
        {
            string amount = packet.substr(packet.find("Amount_dropped|") + 15, packet.length() - packet.find("Amount_dropped|") - 1);
            gt::send_log("`9Dropped wls: `c" + amount);
            return true;
        }
    }
    if (packet.find("eventName|102_PLAYER.AUTHENTICATION") != -1)
    {
        string wlbalance = packet.substr(packet.find("Worldlock_balance|") + 18, packet.length() - packet.find("Worldlock_balance|") - 1);

        if (wlbalance.find("PLAYER.") != -1)
        {
            gt::send_log("`9World Lock Balance: `#0");
        }
        else
        {
            gt::send_log("`9World Lock Balance: `#" + wlbalance);

        }
        if (packet.find("Authenticated|1") != -1)
        {
            gt::send_log("`9Player Authentication `2Successful.");
        }
        else
        {
            gt::send_log("`9Player Authentication `4Failed.");
        }

    }
    if (packet.find("eventName|100_MOBILE.START") != -1)
    {
        string gem = packet.substr(packet.find("Gems_balance|") + 13, packet.length() - packet.find("Gems_balance|") - 1);
        string level = packet.substr(packet.find("Level|") + 6, packet.length() - packet.find("Level|") - 1);
        string uidd = packet.substr(packet.find("GrowId|") + 7, packet.length() - packet.find("GrowId|") - 1);
        string wls = packet.substr(packet.find("othercurrency|^^") + 23, packet.length() - packet.find("othercurrency|^^") - 1);
    }
    if (packet.find("eventName|300_WORLD_VISIT") != -1)
    {
        if (packet.find("Locked|0") != -1)
        {
            gt::send_log("`4This world is not locked by a world lock.");
        }
        else
        {
            gt::send_log("`2This world is locked by a world lock.");

            if (packet.find("World_owner|") != -1)
            {
                string uidd = packet.substr(packet.find("World_owner|") + 12, packet.length() - packet.find("World_owner|") - 1);
                gt::send_log("`9World Owner UID: `#" + uidd);
            }
        }
    }

    return true;
}
