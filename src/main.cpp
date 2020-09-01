#include <gtkmm.h>
#include <iostream>

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create("org.gtkmm.example");

    auto builder = Gtk::Builder::create_from_file("gui/demo.glade");

    Gtk::Window * pDialog;
    builder->get_widget<Gtk::Window>("wnd_main", pDialog);

    app->run(*pDialog, argc, argv);

    delete pDialog;

    return 0;
}
