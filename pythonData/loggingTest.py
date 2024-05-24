import logging

logging.debug('This is a debug message')
logging.info("This is an info message")
logging.warning("This is an warning message")
logging.error("This is an error message")
logging.critical("This is an critical message")

logger = logging.getLogger("main")
stream_handler = logging.StreamHandler()
logger.addHandler(stream_handler)
#로그 정보 파일로 내보내기
file_handler = logging.FileHandler("my.log")
logger.addHandler(file_handler)
logger.debug("틀렸어!")
logger.info("확인해라~")
logger.warning("조심해!!!!")
logger.error("야야 에러났다")
logger.critical("망했어...")