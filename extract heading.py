import requests
from bs4 import BeautifulSoup

url = "https://example.com"
response = requests.get(url)

soup = BeautifulSoup(response.text, "html.parser")

for heading in soup.find_all(["h1", "h2"]):
    print(heading.text)
