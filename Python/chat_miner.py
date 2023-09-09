import chatminer.visualizations as vis
import matplotlib.pyplot as plt
from chatminer.chatparsers import WhatsAppParser

FILEPATH = r'WhatsApp-Chat mit Mi Princesa 😍.txt'
FILEPATH_2 = r'WhatsApp-Chat mit Posadas-Puente 💙💗💙💙.txt'
FILEPATH_3 = r'_chat.txt'

parser = WhatsAppParser(FILEPATH_2)
parser.parse_file()
df = parser.parsed_messages.get_df()

# fig, ax = plt.subplots(3, 1)
# fig.suptitle('Whatsapp')
# ax[0] = vis.calendar_heatmap(df, year=2023, cmap='Oranges', ax=ax[0])
# ax[1] = vis.calendar_heatmap(df, year=2022, cmap='Greens', ax=ax[1])
# ax[2] = vis.calendar_heatmap(df, year=2021, cmap='Blues', ax=ax[2])

fig, ax = plt.subplots(figsize=(8, 3))
stopwords = ['sticker', 'omitido', 'omitida', 'imagen', 'mensaje', 'ausgeschlossen', 'medien']
kwargs={"background_color": "white", "width": 800, "height": 300, "max_words": 500}
ax = vis.wordcloud(df, ax=ax, stopwords=stopwords, **kwargs)

# if not vis.is_radar_registered():
# 	vis.radar_factory(7, frame="polygon")
# fig, ax = plt.subplots(1, 2, figsize=(7, 3), subplot_kw={'projection': 'radar'})
# ax[0] = vis.radar(df, ax=ax[0])
# ax[1] = vis.radar(df, ax=ax[1], color='C1', alpha=0)

# fig, ax = plt.subplots(1, 2, figsize=(7, 3), subplot_kw={'projection': 'polar'})
# ax[0] = vis.sunburst(df, highlight_max=True, isolines=[2500, 5000], isolines_relative=False, ax=ax[0])
# ax[1] = vis.sunburst(df, highlight_max=False, isolines=[0.5, 1], color='C1', ax=ax[1])

print("Hola")