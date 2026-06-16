import requests
from bs4 import BeautifulSoup

url = "https://example.com"
response = requests.get(url)

soup = BeautifulSoup(response.text, "html.parser")

with open("webpage.txt", "w", encoding="utf-8") as file:
    file.write(soup.get_text())

print("Content saved successfully.")
