#include "../header.h"

#ifndef DANCLER_INTERFACE_API_
#define DANCLER_INTERFACE_API_ 1

int initialize_window_layout(GtkApplication *application, void *data);

void play_stop_current_audio(struct ProgramConfig *config);

void start_previous_audio();

void start_next_audio();

void mute_audio(struct ProgramConfig *config);

void load_audio_file_cover();

void create_information_panel(GtkWidget *mainWindow, char titleName[], char authorName[]);

#endif
