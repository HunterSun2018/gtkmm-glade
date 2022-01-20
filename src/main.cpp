#include <gtkmm.h>
#include <iostream>
#include <string>
#include <string_view>

using namespace std;
using namespace Gtk;

template <typename WIDGET>
auto get_widget(Glib::RefPtr<Builder> builder, string_view widget_name)
{
    WIDGET *widget = nullptr;

    builder->get_widget<WIDGET>(widget_name.data(), widget);

    return shared_ptr<WIDGET>(widget);
}

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create("org.gtkmm.example");

    auto builder = Gtk::Builder::create_from_file("gui/test.glade");

    auto wnd = get_widget<Window>(builder, "wnd_main");

    app->run(*wnd, argc, argv);

    return 0;
}
