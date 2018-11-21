from sklearn.feature_extraction.text import CountVectorizer
import pandas as pd

vectorizer = CountVectorizer()

news_data = pd.read_csv("/Users/jonathanhale/Documents/Courses/Machine Learning/example_data/news_sample (1).csv")

def bag_of_words (news_data):
    r = news_data['headline'].shape[0]
    corpus = news_data['headline'].values.tolist()
    mat_corpus = vectorizer.fit_transform(corpus).toarray()
    vec_corpus = list(range(0, r-1))
    for i in range(0,r-1):
        vec_corpus[i] = mat_corpus[i:]
    news_data['headline'] = list(mat_corpus)
    print(news_data['headline'])

bag_of_words(news_data)


