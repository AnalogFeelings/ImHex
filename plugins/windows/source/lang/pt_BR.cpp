#include <hex/api/content_registry.hpp>
#include <hex/api/localization.hpp>

namespace hex::plugin::windows {

    void registerLanguagePtBR() {
        ContentRegistry::Language::addLocalizations("pt-BR", {
            { "hex.windows.title_bar_button.feedback", "Deixar Feedback" },
            { "hex.windows.title_bar_button.debug_build", "Compilação de depuração"},

            { "hex.windows.view.tty_console.name", "TTY Console" },
                { "hex.windows.view.tty_console.config", "Configuração"},
                    { "hex.windows.view.tty_console.port", "Porta" },
                    { "hex.windows.view.tty_console.reload", "Recarregar" },
                    { "hex.windows.view.tty_console.baud", "Baud rate" },
                    { "hex.windows.view.tty_console.num_bits", "Data bits" },
                    { "hex.windows.view.tty_console.stop_bits", "Stop bits" },
                    { "hex.windows.view.tty_console.parity_bits", "Parity bit" },
                    { "hex.windows.view.tty_console.cts", "Usar o controle de fluxo CTS" },
                    { "hex.windows.view.tty_console.connect", "Conectar" },
                    { "hex.windows.view.tty_console.disconnect", "Desconectar" },
                    { "hex.windows.view.tty_console.connect_error", "Falha ao conectar à porta COM!" },
                    { "hex.windows.view.tty_console.no_available_port", "Nenhuma porta COM válida está selecionada ou nenhuma porta COM está disponível!" },
                    { "hex.windows.view.tty_console.clear", "Limpar" },
                    { "hex.windows.view.tty_console.auto_scroll", "Auto rolagem" },
                { "hex.windows.view.tty_console.console", "Console" },
                    { "hex.windows.view.tty_console.send_etx", "Enviar ETX" },
                    { "hex.windows.view.tty_console.send_eot", "Enviar EOT" },
                    { "hex.windows.view.tty_console.send_sub", "Enviar SUB" },

                    { "hex.builtin.setting.general.context_menu_entry", "Entrada do menu de contexto do Windows" },
        });
    }

}