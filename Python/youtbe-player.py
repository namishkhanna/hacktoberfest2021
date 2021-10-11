from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support import expected_conditions
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
import time

class player:

    def __init__(self,inp):
        self.browser = webdriver.Chrome()
        self.query=inp

    def search_video(self):
        print(self.query)

        self.browser.get("https://www.youtube.com/")
        search_field = self.browser.find_element_by_name("search_query")
        search_field.send_keys(self.query)
        search_field.send_keys(Keys.ENTER)
        to_xpath="/html/body/ytd-app/div/ytd-page-manager/ytd-search/div[1]/ytd-two-column-search-results-renderer/div/ytd-section-list-renderer/div[2]/ytd-item-section-renderer/div[3]/ytd-video-renderer[1]/div[1]/div/div[1]/div/h3"
        #WebDriverWait(self.browser, 20).until(expected_conditions.visibility_of_element_located((By.XPATH, to_xpath)))
        time.sleep(5)
        video_element=self.browser.find_element_by_xpath("/html/body/ytd-app/div/ytd-page-manager/ytd-search/div[1]/ytd-two-column-search-results-renderer/div/ytd-section-list-renderer/div[2]/ytd-item-section-renderer/div[3]/ytd-video-renderer[1]/div[1]/ytd-thumbnail/a/yt-img-shadow/img")
        video_element = self.browser.find_element_by_xpath(to_xpath)
        video_element.click()


if __name__=='__main__':
    pl=player('despacito')
    pl.search_video()